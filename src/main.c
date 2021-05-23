#include <stdbool.h>
#include "main.h"

#include "logger/log.h"

int main(int argc, const char *argv[]) 
{
    set_log_level(LOG_DEBUG);

    mmu_t *mmu = mmu_create();
    cpu_t *cpu = cpu_create();

    mmu_load_bios(mmu);
    cpu_reset(cpu);

    log_debug("Loading BIOS");

    log_debug("Loading cartridge");

    run_simulation(cpu, mmu);

    mmu_destroy(mmu);
    cpu_destroy(cpu);

    log_debug("Exitting...");
    return 0;
}

void run_simulation(cpu_t *cpu, mmu_t *mmu)
{
    log_debug("Running simulation");
    while (!cpu->halted) {
        cpu_tick(cpu, mmu);
    }
}