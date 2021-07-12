#ifndef _PPU_H
#define _PPU_H

#include "cpu.h"
#include "mmu.h"

#define PPU_LCD_ENABLE_FLAG (0x01 << 7) // 0=off, 1=on
#define PPU_TILE_MAP_SELECT (0x01 << 6) // 0=9800-9BFF, 1=9C00-9FFF
#define PPU_WINDOW_DISPLAY_ENABLE (0x01 << 5) // 0=off, 1=on
#define PPU_BG_WINDOW_TILE_DATA_SELECT (0x01 << 4) // 0=8800-97FF, 1=8000-8FFF
#define PPU_BG_TILE_MAP_DISPLAY_SELECT (0x01 << 3) // 0=9800-9BFF, 1=9C00-9FFF
#define PPU_SPRITE_SIZE (0x01 << 2) // 0=8x8, 1=8x16
#define PPU_SPRITE_DISPLAY_ENABLE (0x01 << 1) // 0=Off, 1=On
#define PPU_BG_ENABLE (0x01) // 0=Off, 1=On

void draw_scanline(cpu_t *cpu, mmu_t *mmu);
void render_sprites();
void render_tiles();
void get_colour();

#endif