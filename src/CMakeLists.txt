cmake_minimum_required(VERSION 3.0.0)
project(GB-Emu VERSION 0.1.0)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

add_subdirectory(logger)
add_subdirectory(glfw-3.3.4)
add_executable(GB-Emu main.c)
target_link_libraries(GB-Emu LINK_PUBLIC logger glfw GLU GL)

target_sources(GB-Emu PRIVATE
    cpu.c
    mmu.c
    cpu_opcodes.c
    register.c
    ppu.c
)