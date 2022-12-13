/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_MUTE, KC_Z,    KC_X,
        KC_MPRV, KC_MPLY, KC_MNXT
    ),

    [1] = LAYOUT(
        _______, _______, _______,
        _______, _______, _______
    )
};

/* Rotary encoder definition */
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	  [0] = { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
		[1] = { ENCODER_CCW_CW(KC_MNXT, KC_MPRV) },
};
#endif
