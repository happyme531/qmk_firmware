/* Copyright 2021 CyberGear Marius Kavoliunas
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define MANUFACTURER    CXT
#define PRODUCT         12E3 (QMK Firmware)

// The pin connected to the data pin of the LEDs
#define RGB_DI_PIN F7
// The number of LEDs connected
#define DRIVER_LED_TOTAL 12

//TopLeft, TopRight, Bottom
#define ENCODERS_PAD_A { F5, E6, B3 }
#define ENCODERS_PAD_B { F6, F0, B2 }
#define ENCODER_RESOLUTIONS {4, 4, 2}

//Extra RGB matrix effects
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS

