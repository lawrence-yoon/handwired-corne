// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
  // empty layer
  [15] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                      KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),
  */

    [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TAB,    KC_Q,   KC_W,    KC_E,    KC_R,   KC_T,                           KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,  KC_BACKSPACE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_ESCAPE, KC_A,     KC_S,     KC_D,    KC_F,   KC_G,                         KC_H,    KC_J,    KC_K,    KC_L,    KC_SEMICOLON,  KC_QUOTE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_LEFT_SHIFT, KC_Z, KC_X,  KC_C,    KC_V,   KC_B,                               KC_N, KC_M,  KC_COMMA, KC_DOT, KC_SLASH, RSFT_T(KC_ENTER),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                      KC_LEFT_CTRL, KC_APPLICATION, LT(1, KC_BACKSPACE),           LT(2, KC_SPACE), MO(3), KC_RIGHT_ALT
                                      //`--------------------------'  `--------------------------'

  ),
    [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_NO,    KC_1,   KC_2,    KC_3,    KC_4,   KC_5,                           KC_6,   KC_7,    KC_8,    KC_9,    KC_0,  KC_BACKSPACE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_NO, KC_NO,     KC_NO,     KC_NO,    KC_NO,   KC_NO,           KC_KP_ASTERISK, KC_KP_4,   KC_KP_5, KC_KP_6,  KC_KP_PLUS, KC_KP_EQUAL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_NO, KC_NO, KC_NO,  KC_NO,    KC_NO,   KC_NO,                             KC_KP_SLASH, KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_MINUS, KC_NO,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_NO, KC_NO, KC_NO,         KC_NO, KC_KP_DOT, KC_KP_0
                                      //`--------------------------'  `--------------------------'

  ),
    [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
KC_GRAVE, KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_PERCENT,      KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_BACKSPACE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_TILDE, KC_QUOTE, KC_LEFT_ANGLE_BRACKET, KC_LEFT_PAREN, KC_LEFT_CURLY_BRACE, KC_LEFT_BRACKET,                             KC_RIGHT_BRACKET, KC_RIGHT_CURLY_BRACE, KC_RIGHT_PAREN, KC_RIGHT_ANGLE_BRACKET, KC_COLON,  KC_PIPE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_SLASH, KC_DOUBLE_QUOTE, KC_NO,  KC_NO,    KC_NO,   KC_NO,         KC_MINUS, KC_UNDERSCORE,   KC_EQUAL, KC_PLUS,  KC_SEMICOLON,   KC_BACKSLASH,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  ),
    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
   KC_NO, KC_F1, KC_F2, KC_F3,  KC_F4,   KC_SYSTEM_WAKE,          KC_MEDIA_PREV_TRACK, KC_PAGE_UP, KC_AUDIO_VOL_UP, KC_MEDIA_NEXT_TRACK, KC_HOME, KC_DELETE,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_NO, KC_F5, KC_F6, KC_F7, KC_F8, KC_NO,                  KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_MEDIA_PLAY_PAUSE,   KC_MEDIA_STOP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
KC_SYSTEM_POWER, KC_F9, KC_F10,  KC_F11, KC_F12, KC_SYSTEM_SLEEP,       KC_B, KC_PAGE_DOWN, KC_AUDIO_VOL_DOWN, KC_AUDIO_MUTE, KC_END, KC_PRINT_SCREEN,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_NO, KC_NO, KC_NO,         KC_NO, KC_NO, KC_NO
                                      //`--------------------------'  `--------------------------'

  )
};
