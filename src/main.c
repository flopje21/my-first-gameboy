#include <stdbool.h>
#include "main.h"

#include "logger/log.h"
#include <GLFW/glfw3.h>

// Required for sleep() method
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

bool TEST_FILE = true;
double TARGET_FPS = 60.0;

int main(int argc, const char *argv[]) 
{
    set_log_level(LOG_DEBUG);
    GLFWwindow *window;

    if (!glfwInit())
    {
        log_debug("Failed to init window");
        exit(1);
    }
    
    window = glfwCreateWindow(160, 144, "MyGameboy Emulator", NULL, NULL);
    if (!window)
    {
        log_debug("Failed to create window");
        glfwTerminate();
        exit(1);
    }

    glfwMakeContextCurrent(window);

    mmu_t *mmu = mmu_create();
    cpu_t *cpu = cpu_create();

    if (TEST_FILE) 
    {
        FILE *f = fopen("../rom/cpu_instrs.gb", "rb");
        if (f == NULL)
        {
            log_debug("File pointer null");
            exit(1);
        }
        
        fseek(f, 0, SEEK_SET);
        fread(&mmu->memory, 1, 0xFFFF, f);
        log_debug("Test file loaded");
    }
    else 
    {
        log_debug("Loading BIOS");
        
        if (!mmu->bios_loaded)
        {
            mmu_load_bios(mmu);
        }
    }
    
    cpu_reset(cpu);

    log_debug("Start simulation");


    // Shamelessly inspired by:
    // http://www.codeslinger.co.uk/pages/projects/gameboy/beginning.html
    double lasttime = glfwGetTime();
    double difference = 0.0;

    const int32_t MAXCYCLES = 69905;
    while (!glfwWindowShouldClose(window))
    {
        // The gameboy is able to execute 4194304 instructions per second,
        // With a target fps of 60, we execute 69905(4194304/60) per frame
        int32_t currentCycles = 0;
        while (currentCycles < MAXCYCLES)
        {
            cpu_tick(cpu, mmu);
            currentCycles += cpu->tick;
        }
        
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);

        glfwPollEvents();

        // Limit framerate to 60 fps (same as Gameboy)
        difference = glfwGetTime() < lasttime + 1.0/TARGET_FPS;
        if (difference > 0)
        {
            sleep(difference);
        }

        lasttime += 1.0/TARGET_FPS;    
    }
    
    log_debug("Exitting...");

    glfwTerminate();
    mmu_destroy(mmu);
    cpu_destroy(cpu);

    return 0;
}
