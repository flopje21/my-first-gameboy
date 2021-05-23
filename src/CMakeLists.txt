add_subdirectory(logger)
add_executable(GB-Emu main.c)
target_link_libraries(GB-Emu LINK_PUBLIC logger)

target_sources(GB-Emu PRIVATE
    cpu.c
    mmu.c
    cpu_opcodes.c
    register.c
)