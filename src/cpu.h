#ifndef _CPU_H
#define _CPU_H

#include <stdlib.h>
#include <string.h>

#include "mmu.h"
#include "register.h"

#define CPU_ZERO_FLAG_BIT (0x01 << 7)
#define CPU_SUBSTRACT_FLAG_BIT (0x01 << 6)
#define CPU_HALF_CARRY_FLAG_BIT (0x01 << 5)
#define CPU_CARRY_FLAG_BIT (0x01 << 4)

typedef struct cpu_t 
{
    struct
    {
        reg16_t af, bc, de, hl;
        reg16_t sp, pc;
    } reg;

    uint8_t flags;

    uint8_t curr_op; // 16 bits as we have the extension in the 0xCB range
    uint16_t curr_op_addr;
    uint16_t tick;
    bool halted;
    bool ime; // interupt master enable flag (IME)

} cpu_t;

typedef struct opfunc_t
{
     void (*func)(cpu_t *cpu, mmu_t *mmu);
     uint8_t bytes; // The opcode size + any extra offset (eg data that can folow opcode)
     uint8_t cycles;
} opfunc_t;

cpu_t * cpu_create();
void cpu_enable(cpu_t *cpu);
void cpu_reset(cpu_t *cpu);
void cpu_destroy(cpu_t *cpu);
void cpu_tick(cpu_t *cpu, mmu_t *mmu);

void fetch_next_instruction(cpu_t *cpu, mmu_t *mmu);
opfunc_t * cpu_load_op(cpu_t *cpu, mmu_t *mmu);

#endif