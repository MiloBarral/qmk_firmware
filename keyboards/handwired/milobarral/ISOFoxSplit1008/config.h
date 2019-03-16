/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include QMK_KEYBOARD_CONFIG_H

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1257
#define DEVICE_VER      0x0100
#define MANUFACTURER    MiloBarral
#define PRODUCT         ISOFoxSplit1008
#define DESCRIPTION     Split 65 percent staggered ISO keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

/*
                        +---+        
                +-------|USB|-------+
                | ||J1  +---+       |
RGBPIN    D3    | []TX0       RAW[] |   RAW   
SPLITPIN  D2    | []RX1       GND[] |   GND
         GND    | []GND       RST[] |   RST    RESET PULSADOR
         GND    | []GND   P   VCC[] |   VCC
          D1    | []2     R    A3[] |   F4     COL1
SERIAL    D0    | []3     O    A2[] |   F5     COL2
RowA      D4    | []4     M    A1[] |   F6     COL3
RowB      C6    | []5     I    A0[] |   F7     COL4
RowC      D7    | []6     C    15[] |   B1     COL5
RowD      E6    | []7     R    14[] |   B3     COL6
RowE      B4    | []8     O    16[] |   B2     COL7
COL9      B5    | []9          10[] |   B6     COL8
                +-------------------+
*/

// wiring of each half
#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6, B5 }
#define SPLIT_HAND_PIN D2

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN D3
//#define RGBLIGHT_ANIMATIONS
//#define RGBLED_NUM 16    // Number of LEDs
