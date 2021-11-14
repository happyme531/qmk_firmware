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

#include "12e3.h"
#include "rgb_matrix.h"
#include "rgb_matrix_types.h"


led_config_t g_led_config = {
    {
        {3,2,1,0},
        {4,5,6,7},
        {11,10,9,8},
        {NO_LED,NO_LED,NO_LED,NO_LED}
    }, {
        {112,0},{75,0},{37,0},{0,0},{0,32},{37,32},{75,32},{112,32},{112,64},{75,64},{37,64},{0,64}
    }, {
        1,1,1,1,1,1,1,1,1,1,1,1
    }
};

bool encoder_update_kb(uint8_t index, bool clockwise) {
    return encoder_update_user(index, clockwise);
}
