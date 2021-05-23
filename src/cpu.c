#include "cpu.h"
#include "logger/log.h"
#include "cpu_opcodes.h"

opfunc_t cpu_opcodes[0xFF] = {};
opfunc_t cpu_opcodes_cb[0xFF] = {};

cpu_t *cpu_create()
{
    log_debug("Create CPU");

    cpu_t *cpu = (cpu_t *) malloc(sizeof(cpu_t));

    load_cpu_opcodes(cpu, cpu_opcodes);
    load_cpu_cb_opcodes(cpu, cpu_opcodes_cb);

    return cpu;
}

void cpu_reset(cpu_t *cpu)
{
    memset((void *)&(cpu->reg), 0, sizeof(cpu->reg));
}

void cpu_destroy(cpu_t *cpu)
{
    log_debug("Destroy CPU");
    free(cpu);
    cpu = NULL;
}

void cpu_tick(cpu_t *cpu, mmu_t *mmu)
{
    // Fetch & decode instruction
    opfunc_t *op = cpu_load_op(cpu, mmu);

    if (!op || !op->func)
    {
        char msg[0xFF];
        snprintf(msg, 0xFF, "Failed to decode: 0x%04x", mmu_read_byte(mmu, cpu->reg.pc.value));
        log_debug(msg);
        cpu->reg.pc.value++;
        return;
    }
    // Execute instruction
    op->func(cpu, mmu);

    cpu->tick += op->cycles;

    // Execute instruction
    cpu->reg.pc.value += op->bytes; // Increment pc by 1, as each instruction is at least 1 byte
}

opfunc_t *cpu_load_op(cpu_t *cpu, mmu_t *mmu)
{
    const uint8_t op = mmu_read_byte(mmu, cpu->reg.pc.value);
    opfunc_t *opfunc = &cpu_opcodes[op];

    if (op == 0x7C) {
        uint8_t i = 0;
    }
    
    switch (op) {
        case 0xCB:
            // CB opcode is indication to load next opcode and
            // decode from 2nd instruction set
            cpu->tick += opfunc->cycles;
            cpu->reg.pc.value += opfunc->bytes;
            fetch_next_instruction(cpu, mmu);

            return &cpu_opcodes_cb[cpu->curr_op];
        default:
            return opfunc;
    }
}

void fetch_next_instruction(cpu_t *cpu, mmu_t *mmu)
{
    // Fetch instruction
    uint8_t op = mmu_read_byte(mmu, cpu->reg.pc.value);
    cpu->curr_op = op;
    cpu->curr_op_addr = cpu->reg.pc.value;
}