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

#define MARLIN_LOGO_FULL_SIZE MarlinLogo480x320x16

#include "ui_common.h"

#define TFT_STATUS_TOP_Y       0

#define TFT_TOP_LINE_Y         4

#define MENU_TEXT_X_OFFSET    16
#define MENU_TEXT_Y_OFFSET     7

#define MENU_ITEM_ICON_X       5
#define MENU_ITEM_ICON_Y       5
#define MENU_ITEM_ICON_SPACE  42

#if HAS_UI_480x320
  #define PROGRESS_FONT_NAME  Tahoma36bold_num
  #define MENU_FONT_NAME      Tahoma18
  #define SYMBOLS_FONT_NAME   Helvetica18_symbols
  #define SMALL_FONT_NAME     Tahoma14
  #define MENU_ITEM_HEIGHT    43
  #define FONT_LINE_HEIGHT    34
#elif HAS_UI_480x272
  #define PROGRESS_FONT_NAME  Tahoma18
  #define MENU_FONT_NAME      Tahoma14
  #define SYMBOLS_FONT_NAME   Helvetica14_symbols
  #define MENU_ITEM_HEIGHT    36
  #define FONT_LINE_HEIGHT    24
#endif
#define MENU_LINE_HEIGHT      (MENU_ITEM_HEIGHT + 2)
