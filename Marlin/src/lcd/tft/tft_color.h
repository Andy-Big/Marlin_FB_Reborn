/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "../../inc/MarlinConfigPre.h"

#define RED(color)            ((color >> 8) & 0xF8)
#define GREEN(color)          ((color >> 3) & 0xFC)
#define BLUE(color)           ((color << 3) & 0xF8)
#define RGB(red, green, blue) (((red << 8) & 0xF800) | ((green << 3) & 0x07E0) | ((blue >> 3) & 0x001F))
#define COLOR(color)          RGB(((color >> 16) & 0xFF), ((color >> 8) & 0xFF), (color & 0xFF))
#define HALF(color)           RGB(RED(color) >> 1, GREEN(color) >> 1, BLUE(color) >> 1)

// RGB565 color picker: https://embeddednotepad.com/page/rgb565-color-picker
// Hex code to color name: https://www.color-name.com/

#define COLOR_BLACK           0x0000  // #000000
#define COLOR_WHITE           0xFFFF  // #FFFFFF
#define COLOR_SILVER          0xC618  // #C0C0C0
#define COLOR_GREY            0x7BEF  // #808080
#define COLOR_DARKGREY        0x4208  // #404040
#define COLOR_DARKGREY2       0x39E7  // #303030
#define COLOR_DARK            0x0003  // #000019

#define COLOR_RED             0xF800  // #FF0000
#define COLOR_SCARLET         0xF904  // #FF2020
#define COLOR_LIME            0x7E00  // #00FF00
#define COLOR_MIDNIGHT_BLUE   0x20AC  // #1E156E
#define COLOR_BLUE            0x001F  // #0000FF
#define COLOR_OCEAN_BOAT_BLUE 0x03B7  // #0075BD
#define COLOR_LIGHT_BLUE      0x061F  // #00C3FF
#define COLOR_YELLOW          0xFFE0  // #FFFF00
#define COLOR_MAGENTA         0xF81F  // #FF00FF
#define COLOR_CYAN            0x07FF  // #00FFFF
#define COLOR_DODGER_BLUE     0x041F  // #0080FF
#define COLOR_VIVID_VIOLET    0x7933  // #772399

#define COLOR_DARK_PURPLE     0x9930  // #992380

#define COLOR_MAROON          0x7800  // #800000
#define COLOR_GREEN           0x03E0  // #008000
#define COLOR_NAVY            0x000F  // #000080
#define COLOR_OLIVE           0x8400  // #808000
#define COLOR_PURPLE          0x8010  // #800080
#define COLOR_TEAL            0x0410  // #008080

#define COLOR_ORANGE          0xFC00  // #FF7F00
#define COLOR_VIVID_GREEN     0x7FE0  // #7FFF00
#define COLOR_DARK_ORANGE     0xFC40  // #FF8C00
#define COLOR_CORAL_RED       0xF9E7  // #FF3F3F

#ifndef COLOR_BACKGROUND
  // #define COLOR_BACKGROUND    COLOR_MIDNIGHT_BLUE  // #1E156E
  #define COLOR_BACKGROUND    0x0000  // #000000
#endif
#ifndef COLOR_SELECTION_BG
  #define COLOR_SELECTION_BG      COLOR_DARK_PURPLE
#endif
#ifndef COLOR_WEBSITE_URL
  #define COLOR_WEBSITE_URL       COLOR_OCEAN_BOAT_BLUE
#endif

#ifndef COLOR_TEMP_TEXT
  #define COLOR_TEMP_TEXT         RGB(128, 230, 255)
#endif
#ifndef COLOR_INACTIVE
  #define COLOR_INACTIVE          COLOR_GREY
#endif
#ifndef COLOR_COLD
  #define COLOR_COLD              RGB(201, 201, 201)
#endif
#ifndef COLOR_HOTEND
  #define COLOR_HOTEND            RGB(225, 225, 32)
#endif
#ifndef COLOR_TARGET_HOTEND
  #define COLOR_TARGET_HOTEND     RGB(232, 64, 0)
#endif
#ifndef COLOR_HEATED_BED
  #define COLOR_HEATED_BED        RGB(225, 225, 32)
#endif
#ifndef COLOR_TARGET_BED
  #define COLOR_TARGET_BED        RGB(232, 64, 0)
#endif
#ifndef COLOR_CHAMBER
  #define COLOR_CHAMBER           COLOR_DARK_ORANGE
#endif
#ifndef COLOR_COOLER
  #define COLOR_COOLER            COLOR_DARK_ORANGE
#endif
#ifndef COLOR_FAN
  #define COLOR_FAN               RGB(201, 201, 201)
#endif
#ifndef COLOR_FAN_ACTIVE
  #define COLOR_FAN_ACTIVE        RGB(0, 128, 255)
#endif
#ifndef COLOR_TOP_FRAME_BORDER
  #define COLOR_TOP_FRAME_BORDER  RGB(255, 255, 255)
#endif
#ifndef COLOR_TOP_FRAME_TEXT
  #define COLOR_TOP_FRAME_TEXT    RGB(255, 255, 132)
#endif
#ifndef COLOR_TOP_FRAME_TEXT2
  #define COLOR_TOP_FRAME_TEXT2   RGB(132, 255, 132)
#endif

#ifndef COLOR_MESH_FRAME
  #define COLOR_MESH_FRAME        RGB(0, 0, 255)
#endif
#ifndef COLOR_MESH_BG
  #define COLOR_MESH_BG           RGB(220, 220, 220)
#endif


#ifndef COLOR_AXIS_HOMED
  #define COLOR_AXIS_HOMED        COLOR_WHITE
#endif
#ifndef COLOR_AXIS_NOT_HOMED
  #define COLOR_AXIS_NOT_HOMED    COLOR_YELLOW
#endif

#ifndef COLOR_RATE_100
  #define COLOR_RATE_100          COLOR_FAN
#endif
#ifndef COLOR_RATE_ALTERED
  #define COLOR_RATE_ALTERED      RGB(201, 201, 0)
#endif

#ifndef COLOR_PRINT_TIME
  #define COLOR_PRINT_TIME        COLOR_CYAN
#endif

#ifndef COLOR_PROGRESS_FRAME
  #define COLOR_PROGRESS_FRAME    COLOR_BLUE
#endif
#ifndef COLOR_PROGRESS_BG
  #define COLOR_PROGRESS_BG       RGB(48, 48, 48)
#endif
#ifndef COLOR_PROGRESS_BAR
  #define COLOR_PROGRESS_BAR      COLOR_BLUE
#endif
#ifndef COLOR_PROGRESS_TEXT
  #define COLOR_PROGRESS_TEXT     RGB(255, 255, 132)
#endif

#ifndef COLOR_STATUS_MESSAGE
  #define COLOR_STATUS_MESSAGE    RGB(201, 201, 201)
#endif

#ifndef COLOR_CONTROL_ENABLED
  #define COLOR_CONTROL_ENABLED   RGB(255, 255, 132)
#endif
#ifndef COLOR_CONTROL_DISABLED
  #define COLOR_CONTROL_DISABLED  COLOR_GREY
#endif
#ifndef COLOR_CONTROL_CANCEL
  #define COLOR_CONTROL_CANCEL    RGB(255, 0, 0)
#endif
#ifndef COLOR_CONTROL_CONFIRM
  #define COLOR_CONTROL_CONFIRM   COLOR_VIVID_GREEN
#endif
#ifndef COLOR_BUSY
  #define COLOR_BUSY              COLOR_SILVER
#endif

#ifndef COLOR_MENU_TEXT
  #define COLOR_MENU_TEXT         COLOR_YELLOW
#endif
#ifndef COLOR_MENU_INIFILE
  #define COLOR_MENU_INIFILE      COLOR_LIGHT_BLUE
#endif
#ifndef COLOR_MENU_DIR
  #define COLOR_MENU_DIR          COLOR_WHITE
#endif
#ifndef COLOR_MENU_VALUE
  #define COLOR_MENU_VALUE        COLOR_WHITE
#endif

#ifndef COLOR_SLIDER
  #define COLOR_SLIDER            COLOR_WHITE
#endif
#ifndef COLOR_SLIDER_INACTIVE
  #define COLOR_SLIDER_INACTIVE   COLOR_GREY
#endif

#ifndef COLOR_UBL
  #define COLOR_UBL               COLOR_WHITE
#endif

#ifndef COLOR_TOUCH_CALIBRATION
  #define COLOR_TOUCH_CALIBRATION COLOR_WHITE
#endif

#ifndef COLOR_KILL_SCREEN_BG
  #define COLOR_KILL_SCREEN_BG    COLOR_MAROON
#endif
#ifndef COLOR_KILL_SCREEN_TEXT
  #define COLOR_KILL_SCREEN_TEXT  COLOR_WHITE
#endif

#ifndef E_BTN_COLOR
  #define E_BTN_COLOR             COLOR_YELLOW
#endif
#ifndef X_BTN_COLOR
  #define X_BTN_COLOR             COLOR_CORAL_RED
#endif
#ifndef Y_BTN_COLOR
  #define Y_BTN_COLOR             COLOR_VIVID_GREEN
#endif
#ifndef Z_BTN_COLOR
  #define Z_BTN_COLOR             COLOR_LIGHT_BLUE
#endif
