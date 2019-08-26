#include QMK_KEYBOARD_H
#include "keymap_spanish.h"

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _L1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

/* ISO EXAMPLE:

[ BASE ] = KEYMAP(
  KC_ESC,         KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS, KC_EQL,      KC_BSPC, DEAD,\
  KC_TAB,         KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC, KC_RBRC,     DEAD,    \
  OSL(CAPS),      KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT, KC_NUHS,        KC_ENT,  \
  KC_LSHIFT,      KC_NUBS,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT,     DEAD, \
  KC_LCTL,        KC_LGUI,KC_LALT,                LT(SPACE, KC_SPC),                     OSL(ALT),OSL(FN1),OSL(FN2),    KC_RCTL)

*/

/* MY LAYOUT:
               LA1, LA2, LA3, LA4, LA5, LA6, LA7,  RA1, RA2, RA3, RA4, RA5, RA6,      RA8, RA9, \
               LB1, LB2, LB3,      LB5, LB6, LB7,  RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, RB9, \
               LC1, LC2, LC3,      LC5, LC6, LC7,  RC1, RC2, RC3, RC4, RC5, RC6, RC7,      RC9, \
               LD1, LD2, LD3, LD4, LD5, LD6, LD7,  RD1, RD2, RD3, RD4, RD5,      RD7, RD8, RD9, \
               LE1, LE2, LE3,      LE5, LE6,       RE1,      RE3, RE4, RE5, RE6, RE7, RE8, RE9 \
  */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_65( 
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC, KC_DEL,  \
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,  KC_PGUP, \
    KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS,          KC_PGDN, \
    KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,  \
    KC_LCTL, KC_LGUI, KC_LALT, MO(_L1), KC_SPC,                    KC_SPC,           MO(_L1), KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
  ),

   [_L1] = LAYOUT_65(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           KC_BSPC, KC_PSCR, \
    _______, _______, KC_UP,   _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,          _______, _______, _______, _______, _______, _______, _______,          _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_HOME, \
    KC_TILD, _______, _______, _______, _______,                   _______,          _______, _______, _______, _______, _______, _______, KC_END
   ),
};
