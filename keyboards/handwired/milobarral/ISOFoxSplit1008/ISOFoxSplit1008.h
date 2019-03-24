#pragma once

#include "ISOFoxSplit1008.h"

#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
  #include <avr/io.h>
  #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_65( \
  LA1, LA2, LA3, LA4, LA5, LA6, LA7, RA1, RA2, RA3, RA4, RA5, RA6,      RA8, RA9, \
  LB1, LB2, LB3,      LB5, LB6, LB7, RB1, RB2, RB3, RB4, RB5, RB6, RB7, RB8, RB9, \
  LC1, LC2, LC3,      LC5, LC6, LC7, RC1, RC2, RC3, RC4, RC5, RC6, RC7,      RC9, \
  LD1, LD2, LD3, LD4, LD5, LD6, LD7, RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD8, RD9, \
  LE1, LE2, LE3,      LE5, LE6, LE7, RE1,      RE3, RE4, RE5, RE6, RE7, RE8, RE9 \
  ) \
  { \
    { LA1, LA2,   LA3, LA4,   LA5, LA6, LA7,   KC_NO, KC_NO }, \
    { LB1, LB2,   LB3, KC_NO, LB5, LB6, LB7,   KC_NO, KC_NO }, \
    { LC1, LC2,   LC3, KC_NO, LC5, LC6, LC7,   KC_NO, KC_NO }, \
    { LD1, LD2,   LD3, LD4,   LD5, LD6, LD7,   KC_NO, KC_NO }, \
    { LE1, LE2,   LE3, KC_NO, LE5, LE6, LE7,   KC_NO, KC_NO }, \
    { RA1, RA2,   RA3, RA4,   RA5, RA6, KC_NO, RA8,   RA9 }, \
    { RB1, RB2,   RB3, RB4,   RB5, RB6, RB7,   RB8,   RB9 }, \
    { RC1, RC2,   RC3, RC4,   RC5, RC6, RC7,   KC_NO, RC9 }, \
    { RD1, RD2,   RD3, RD4,   RD5, RD6, RD7,   RD8,   RD9 }, \
    { RE1, KC_NO, RE3, RE4,   RE5, RE6, RE7,   RE8,   RE9 }, \
  }


