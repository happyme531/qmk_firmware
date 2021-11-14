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

#include "action.h"
#include "keycode.h"
#include "quantum_keycodes.h"
#include "rgb_matrix.h"
#include QMK_KEYBOARD_H


#define MAC(kc) (QK_RCTL | QK_RGUI | QK_RALT | (kc))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_4x4(
        KC_7,    KC_8,    KC_9,    KC_BSPC,
        KC_4,    KC_5,    KC_6,    KC_DOT,
        KC_1,    KC_2,    KC_3,    KC_0,
        KC_NO,   KC_ENTER,KC_SPACE,KC_ESCAPE
    ),
    [1] = LAYOUT_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT_4x4(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            rgb_matrix_step();
        } else {
            rgb_matrix_step_reverse();
        }
        return false;
    }else if (index == 1) {
        if (clockwise) {
            tap_code(KC__VOLUP);
        } else {
            tap_code(KC__VOLDOWN);
        }
        return false;
    }else if (index == 2) {
        if (clockwise) {
            tap_code(KC_RIGHT);
        } else {
            tap_code(KC_LEFT);
        }
        return false;
    }
    return true;
}