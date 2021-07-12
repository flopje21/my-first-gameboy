#include "ppu.h"
#include "logger/log.h"

void draw_scanline(cpu_t *cpu, mmu_t *mmu)
{
    const uint8_t LCDC = mmu->memory[0xFF40];

    if (LCDC & PPU_SPRITE_DISPLAY_ENABLE)
    {
        render_sprites();
    }

    if (LCDC & PPU_BG_ENABLE)
    {
        render_tiles();
    }
}

void render_sprites()
{

}

void render_tiles()
{

}
