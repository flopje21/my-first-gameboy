#include "mmu.h"

#include "logger/log.h"

mmu_t * mmu_create()
{
    log_debug("Create MMU");

    mmu_t *mmu = malloc(sizeof(mmu_t));
    memset(&mmu->memory, 0, 0x10000);
    return mmu;
}

void mmu_destroy(mmu_t *mmu)
{
    log_debug("Destroy MMU");
    free(mmu);
    
    mmu = NULL;
}

void mmu_load_bios(mmu_t *mmu)
{
    memcpy((void *) &(mmu->memory), (const void *)BIOS, sizeof(BIOS));
    mmu->bios_loaded = true;
}

uint8_t mmu_read_byte(mmu_t *mmu, uint16_t addr)
{
    return (mmu->memory[addr]);
}
