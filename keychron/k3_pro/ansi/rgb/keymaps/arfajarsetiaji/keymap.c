/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  MAC_BASE,
  MAC_FN,
  WIN_BASE,
  WIN_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[MAC_BASE] = LAYOUT_ansi_84(
     MT(KC_NO,KC_ESC),KC_BRID,KC_BRIU,KC_MCTL,KC_LPAD, RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  MT(KC_NO, KC_SNAP),LCA_T(KC_DEL),RGB_MOD,
     KC_GRV,          KC_1,   KC_2,   KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   LAG_T(KC_BSPC),     KC_PGUP,
     MEH_T(KC_TAB),KC_Q, KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     HYPR_T(KC_ESC),KC_A,KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            LCAG_T(KC_ENT),     KC_HOME,
     LSG_T(KC_LEFT_SHIFT),KC_Z,    KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            C_S_T(KC_RIGHT_SHIFT),KC_UP,KC_END,
     LCTL_T(KC_NO),LALT_T(KC_NO), LGUI_T(KC_NO),                                                             LSFT_T(KC_SPC),                     RGUI_T(KC_NO),TT(1),LSA_T(KC_NO),KC_LEFT,KC_DOWN,  KC_RGHT),

[MAC_FN] = LAYOUT_ansi_84(
     KC_PWR,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_F13,   KC_DEL,   BAT_LVL,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_F14,   KC_F15,   KC_F16,   KC_F17,   KC_F18,   KC_F19,   KC_F20,   KC_F21,   KC_F22,   KC_MS_BTN2,          KC_MS_WH_DOWN,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_F23,   KC_F24,   KC_MS_BTN3,         KC_MS_WH_UP,
     KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_MS_BTN1,             KC_MS_WH_RIGHT,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_MS_UP, KC_MS_WH_LEFT,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_SPC,                       KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_MS_LEFT,KC_MS_DOWN,  KC_MS_RIGHT),

[WIN_BASE] = LAYOUT_ansi_84(
     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,  KC_DEL,   RGB_MOD,
     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_PGUP,
     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,            KC_PGDN,
     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,             KC_HOME,
     KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,  KC_UP,    KC_END,
     KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT, MO(WIN_FN),KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

[WIN_FN] = LAYOUT_ansi_84(
     KC_TRNS,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_TRNS,  RGB_TOG,
     KC_TRNS,  BT_HST1,  BT_HST2,  BT_HST3,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,
     KC_TRNS,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,            KC_TRNS,
     KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  BAT_LVL,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS,  KC_TRNS,  KC_TRNS,
     KC_TRNS,  KC_TRNS,  KC_TRNS,                                KC_TRNS,                                KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(KC_NO,KC_ESC):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_ESC);
            } else if (record->event.pressed) {
                tap_code16(LGUI(KC_W));
            }
            return false;
        break;
        case MT(KC_NO, KC_SNAP):
            if (record->tap.count && record->event.pressed) {
                tap_code16(LSG(KC_5));
            } else if (record->event.pressed) {
                tap_code16(LSG(KC_4));
            }
            return false;
        break;
        case LSG_T(KC_LEFT_SHIFT):
            if (record->tap.count && record->event.pressed) {
                 tap_code16(LSG(KC_TAB));
                 return false;
            }
        break;
        case C_S_T(KC_RIGHT_SHIFT):
            if (record->tap.count && record->event.pressed) {
                 tap_code16(RCS(KC_TAB));
                 return false;
            }
        break;
        case LGUI_T(KC_NO):
            if (record->tap.count && record->event.pressed) {
                 tap_code16(LALT(KC_SPC));
                 return false;
            }
        break;
        case RGUI_T(KC_NO):
            if (record->tap.count && record->event.pressed) {
                 tap_code16(LSG(KC_SLSH));
                 return false;
            }
        break;
        case LCTL_T(KC_NO):
            if (record->tap.count && record->event.pressed) {
                 tap_code16(LGUI(KC_C));
                 return false;
            }
        break;
        case LALT_T(KC_NO):
            if (record->tap.count && record->event.pressed) {
                 tap_code16(LGUI(KC_V));
                 return false;
            }
        break;
        case LSA_T(KC_NO):
            if (record->tap.count && record->event.pressed) {
                 tap_code16(LGUI(KC_COMM));
                 return false;
            }
        break;
    }
    return true;
}
