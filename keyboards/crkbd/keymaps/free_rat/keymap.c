#include QMK_KEYBOARD_H

/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

// void matrix_init_user(void) {
  // debug_enable=true;
  // debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
// }

#define KC_S_F LSFT_T(KC_F)
#define KC_C_D LCTL_T(KC_D)
#define KC_A_S LALT_T(KC_S)
#define KC_G_A LGUI_T(KC_A)
#define KC_ALG ALL_T(KC_G)
#define KC_RAX RALT_T(KC_X)

#define KC_S_J LSFT_T(KC_J)
#define KC_C_K LCTL_T(KC_K)
#define KC_A_L LALT_T(KC_L)
#define KC_GSC LGUI_T(KC_SCLN)
#define KC_ALH ALL_T(KC_H)
#define KC_RAD RALT_T(KC_DOT)

#define KC_SHSP LSFT_T(KC_SPC)

#define KC_OSH OSM(MOD_HYPR)
#define KC_OSS OSM(MOD_LSFT)
#define KC_OSC OSM(MOD_LCTL)
#define KC_OSA OSM(MOD_LALT)
#define KC_OSG OSM(MOD_LGUI)
#define KC_OSR OSM(MOD_RALT)

#define TO_BAS TO(0)
#define TO_OTH MO(1)
#define TO_LOL TO(2)
#define TO_GAM TO(3)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌──────────┬─────┬─────┬─────┬────────┬─────┐   ┌──────┬─────┬─────┬─────┬─────┬─────────┐
//    │ RGB_TOG  │  q  │  w  │  e  │   r    │  t  │   │  y   │  u  │  i  │  o  │  p  │ TO_LOL  │
//    ├──────────┼─────┼─────┼─────┼────────┼─────┤   ├──────┼─────┼─────┼─────┼─────┼─────────┤
//    │ RGB_MOD  │ g_A │ a_S │ c_D │  s_F   │ aLG │   │ aLH  │ s_J │ c_K │ a_L │ gSC │ TO_GAM  │
//    ├──────────┼─────┼─────┼─────┼────────┼─────┤   ├──────┼─────┼─────┼─────┼─────┼─────────┤
//    │ RGB_RMOD │  z  │ rAX │  c  │   v    │  b  │   │  n   │  m  │  ,  │ rAD │  /  │ CM_TOGG │
//    └──────────┴─────┴─────┼─────┼────────┼─────┤   ├──────┼─────┼─────┼─────┴─────┴─────────┘
//                           │ no  │ TO_OTH │ spc │   │ bspc │ ent │ no  │
//                           └─────┴────────┴─────┘   └──────┴─────┴─────┘
[0] = LAYOUT(
  RGB_TOG  , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,     KC_Y    , KC_U   , KC_I    , KC_O   , KC_P    , TO_LOL ,
  RGB_MOD  , KC_G_A , KC_A_S , KC_C_D , KC_S_F , KC_ALG ,     KC_ALH  , KC_S_J , KC_C_K  , KC_A_L , KC_GSC  , TO_GAM ,
  RGB_RMOD , KC_Z   , KC_RAX , KC_C   , KC_V   , KC_B   ,     KC_N    , KC_M   , KC_COMM , KC_RAD , KC_SLSH , CM_TOGG,
                               KC_NO  , TO_OTH , KC_SPC ,     KC_BSPC , KC_ENT , KC_NO
),

//    ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐   ┌──────┬──────┬──────┬────┬──────┬────┐
//    │ BL_TOGG │  BL_UP  │ RGB_SPI │ RGB_HUI │ RGB_SAI │ RGB_VAI │   │ volu │ mstp │ mply │ no │ bRIU │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤   ├──────┼──────┼──────┼────┼──────┼────┤
//    │   no    │ BL_DOWN │ RGB_SPD │ RGB_HUD │ RGB_SAD │ RGB_VAD │   │ vold │ mprv │ mnxt │ no │ bRID │ no │
//    ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤   ├──────┼──────┼──────┼────┼──────┼────┤
//    │   no    │   no    │   no    │   no    │   no    │   no    │   │ mute │  no  │  no  │ no │  no  │ no │
//    └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┤   ├──────┼──────┼──────┼────┴──────┴────┘
//                                  │ QK_BOOT │ TO_BAS  │   spc   │   │ bspc │ ent  │  no  │
//                                  └─────────┴─────────┴─────────┘   └──────┴──────┴──────┘
[1] = LAYOUT(
  BL_TOGG , BL_UP   , RGB_SPI , RGB_HUI , RGB_SAI , RGB_VAI ,     KC_VOLU , KC_MSTP , KC_MPLY , KC_NO , KC_BRIU , KC_NO,
  KC_NO   , BL_DOWN , RGB_SPD , RGB_HUD , RGB_SAD , RGB_VAD ,     KC_VOLD , KC_MPRV , KC_MNXT , KC_NO , KC_BRID , KC_NO,
  KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   , KC_NO   ,     KC_MUTE , KC_NO   , KC_NO   , KC_NO , KC_NO   , KC_NO,
                                QK_BOOT , TO_BAS  , KC_SPC  ,     KC_BSPC , KC_ENT  , KC_NO
),

//    ┌─────┬───┬───┬──────┬──────┬──────┐   ┌──────┬─────┬────┬───┬───┬─────────┐
//    │ esc │ 1 │ 2 │  3   │  4   │  5   │   │  6   │  7  │ 8  │ 9 │ 0 │ TO_BAS  │
//    ├─────┼───┼───┼──────┼──────┼──────┤   ├──────┼─────┼────┼───┼───┼─────────┤
//    │ tab │ q │ w │  e   │  r   │  t   │   │  y   │  u  │ i  │ p │ p │   no    │
//    ├─────┼───┼───┼──────┼──────┼──────┤   ├──────┼─────┼────┼───┼───┼─────────┤
//    │  `  │ a │ s │  d   │  f   │  g   │   │  h   │  j  │ k  │ l │ ; │ CM_TOGG │
//    └─────┴───┴───┼──────┼──────┼──────┤   ├──────┼─────┼────┼───┴───┴─────────┘
//                  │ lalt │ sHSP │ lctl │   │ bspc │ ent │ no │
//                  └──────┴──────┴──────┘   └──────┴─────┴────┘
[2] = LAYOUT(
  KC_ESC , KC_1 , KC_2 , KC_3    , KC_4    , KC_5    ,     KC_6    , KC_7   , KC_8  , KC_9 , KC_0    , TO_BAS ,
  KC_TAB , KC_Q , KC_W , KC_E    , KC_R    , KC_T    ,     KC_Y    , KC_U   , KC_I  , KC_P , KC_P    , KC_NO  ,
  KC_GRV , KC_A , KC_S , KC_D    , KC_F    , KC_G    ,     KC_H    , KC_J   , KC_K  , KC_L , KC_SCLN , CM_TOGG,
                         KC_LALT , KC_SHSP , KC_LCTL ,     KC_BSPC , KC_ENT , KC_NO
),

//    ┌──────┬───┬───┬──────┬──────┬─────┐   ┌──────┬──────┬──────┬──────┬───┬─────────┐
//    │ esc  │ 1 │ q │  w   │  e   │  r  │   │  t   │  y   │  up  │  i   │ o │   no    │
//    ├──────┼───┼───┼──────┼──────┼─────┤   ├──────┼──────┼──────┼──────┼───┼─────────┤
//    │ tab  │ 2 │ a │  s   │  d   │  f  │   │  g   │ left │ down │ rght │ l │ TO_BAS  │
//    ├──────┼───┼───┼──────┼──────┼─────┤   ├──────┼──────┼──────┼──────┼───┼─────────┤
//    │ lsft │ 3 │ z │  x   │  c   │  v  │   │  b   │  n   │  m   │  ,   │ . │ CM_TOGG │
//    └──────┴───┴───┼──────┼──────┼─────┤   ├──────┼──────┼──────┼──────┴───┴─────────┘
//                   │ lalt │ lctl │ spc │   │ bspc │ ent  │  no  │
//                   └──────┴──────┴─────┘   └──────┴──────┴──────┘
[3] = LAYOUT(
  KC_ESC  , KC_1 , KC_Q , KC_W    , KC_E    , KC_R   ,     KC_T    , KC_Y    , KC_UP   , KC_I     , KC_O   , KC_NO  ,
  KC_TAB  , KC_2 , KC_A , KC_S    , KC_D    , KC_F   ,     KC_G    , KC_LEFT , KC_DOWN , KC_RIGHT , KC_L   , TO_BAS ,
  KC_LSFT , KC_3 , KC_Z , KC_X    , KC_C    , KC_V   ,     KC_B    , KC_N    , KC_M    , KC_COMM  , KC_DOT , CM_TOGG,
                          KC_LALT , KC_LCTL , KC_SPC ,     KC_BSPC , KC_ENT  , KC_NO
)
};
// clang-format on

// enum combo_events {
//     COMBO_NUM_L,
//     COMBO_SYM_L,
//     COMBO_FKS_L,
//     COMBO_NAV_L,
//     COMBO_ESC,
//     COMBO_LENGTH
// };
//
// uint16_t COMBO_LEN = COMBO_LENGTH; // insted of #define COMBO_LEN

const uint16_t PROGMEM combo_1[]  = {KC_Z, KC_RAX, COMBO_END};
const uint16_t PROGMEM combo_2[]  = {KC_RAX, KC_C, COMBO_END};
const uint16_t PROGMEM combo_3[]  = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM combo_4[]  = {KC_G_A, KC_A_S, COMBO_END};
const uint16_t PROGMEM combo_5[]  = {KC_A_S, KC_C_D, COMBO_END};
const uint16_t PROGMEM combo_6[]  = {KC_C_D, KC_S_F, COMBO_END};

const uint16_t PROGMEM combo_7[]  = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_8[]  = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM combo_9[]  = {KC_E, KC_R, COMBO_END};

const uint16_t PROGMEM combo_0[]  = {KC_G_A, KC_S_F, COMBO_END};

const uint16_t PROGMEM combo_f1[]  = {KC_Z, KC_RAX, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f2[]  = {KC_RAX, KC_C, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f3[]  = {KC_C, KC_V, KC_SPC, COMBO_END};

const uint16_t PROGMEM combo_f4[]  = {KC_G_A, KC_A_S, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f5[]  = {KC_A_S, KC_C_D, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f6[]  = {KC_C_D, KC_S_F, KC_SPC, COMBO_END};

const uint16_t PROGMEM combo_f7[]  = {KC_Q, KC_W, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f8[]  = {KC_W, KC_E, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f9[]  = {KC_E, KC_R, KC_SPC, COMBO_END};

const uint16_t PROGMEM combo_f10[]  = {KC_V, KC_B, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f11[]  = {KC_S_F, KC_ALG, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_f12[]  = {KC_R, KC_T, KC_SPC, COMBO_END};

// Parentheses ( )
const uint16_t PROGMEM combo_open_parentheses[]  = {KC_U, KC_I, COMBO_END}; // U, I -> (
const uint16_t PROGMEM combo_close_parentheses[] = {KC_I, KC_O, COMBO_END}; // I, O -> )

// Square brackets [ ]
const uint16_t PROGMEM combo_open_square_bracket[]  = {KC_S_J, KC_C_K, COMBO_END}; // J, K -> [
const uint16_t PROGMEM combo_close_square_bracket[] = {KC_C_K, KC_A_L, COMBO_END}; // K, L -> ]

// Curly brackets { }
const uint16_t PROGMEM combo_open_curly_bracket[]  = {KC_M, KC_COMM, COMBO_END};   // M + , -> {
const uint16_t PROGMEM combo_close_curly_bracket[] = {KC_COMM, KC_RAD, COMBO_END}; // , + . -> }

// Angle brackets < >

const uint16_t PROGMEM combo_esc[] = {KC_S_J, KC_C_K, KC_A_L, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_SPC, KC_BSPC, COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_SPC, KC_ENT, COMBO_END};
const uint16_t PROGMEM combo_caps_word[] = {KC_U, KC_I, KC_O, COMBO_END};

const uint16_t PROGMEM combo_apostrophe[] = {KC_A_L, KC_GSC , COMBO_END};
const uint16_t PROGMEM combo_double_apostrophe[] = {KC_C_K, KC_GSC , COMBO_END};
const uint16_t PROGMEM combo_tilde[]      = {KC_RAD, KC_SLSH , COMBO_END};
const uint16_t PROGMEM combo_grave[]      = {KC_COMM, KC_SLSH , COMBO_END};

const uint16_t PROGMEM combo_minus[]  	   = {KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_underscore[]  = {KC_W, KC_E, KC_T, COMBO_END};

const uint16_t PROGMEM combo_equal[]  	   = {KC_A_S, KC_C_D, KC_S_F, COMBO_END};
const uint16_t PROGMEM combo_plus[]  	   = {KC_A_S, KC_C_D, KC_ALG, COMBO_END};

const uint16_t PROGMEM combo_back_slash[]  = {KC_RAX, KC_C, KC_V,     COMBO_END};
const uint16_t PROGMEM combo_pipe[]        = {KC_RAX, KC_C, KC_B,     COMBO_END};

// KC_ALH  , KC_S_J , KC_C_K  , KC_A_L
const uint16_t PROGMEM combo_left_arrow[]  = {KC_ALH, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_down_arrow[]  = {KC_S_J, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_up_arrow[]    = {KC_C_K, KC_SPC, COMBO_END};
const uint16_t PROGMEM combo_right_arrow[] = {KC_A_L, KC_SPC, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	COMBO(combo_1, KC_1),
	COMBO(combo_2, KC_2),
	COMBO(combo_3, KC_3),
	COMBO(combo_4, KC_4),
	COMBO(combo_5, KC_5),
	COMBO(combo_6, KC_6),
	COMBO(combo_7, KC_7),
	COMBO(combo_8, KC_8),
	COMBO(combo_9, KC_9),
	COMBO(combo_0, KC_0),
	COMBO(combo_f1, KC_F1),
	COMBO(combo_f2, KC_F2),
	COMBO(combo_f3, KC_F3),
	COMBO(combo_f4, KC_F4),
	COMBO(combo_f5, KC_F5),
	COMBO(combo_f6, KC_F6),
	COMBO(combo_f7, KC_F7),
	COMBO(combo_f8, KC_F8),
	COMBO(combo_f9, KC_F9),
	COMBO(combo_f10, KC_F10),
	COMBO(combo_f11, KC_F11),
	COMBO(combo_f12, KC_F12),

	COMBO(combo_open_parentheses, KC_LPRN),
	COMBO(combo_close_parentheses, KC_RPRN),
	COMBO(combo_open_square_bracket, KC_LBRC),
	COMBO(combo_close_square_bracket, KC_RBRC),
	COMBO(combo_open_curly_bracket, KC_LCBR),
	COMBO(combo_close_curly_bracket, KC_RCBR),

	COMBO(combo_apostrophe, KC_QUOT),
	COMBO(combo_double_apostrophe, KC_DOUBLE_QUOTE),
	COMBO(combo_tilde, KC_TILD),
	COMBO(combo_grave, KC_GRAVE),

    COMBO(combo_esc, KC_ESC),
    COMBO(combo_caps_word, QK_CAPS_WORD_TOGGLE),
    COMBO(combo_del, KC_DEL),
    COMBO(combo_tab, KC_TAB),

	COMBO(combo_minus, KC_MINS),
	COMBO(combo_underscore, KC_UNDS),

	COMBO(combo_equal, KC_EQL),
	COMBO(combo_plus, KC_PLUS),

	COMBO(combo_back_slash, KC_BSLS),
	COMBO(combo_pipe, KC_PIPE),

	COMBO(combo_left_arrow,  KC_LEFT),
	COMBO(combo_down_arrow,  KC_DOWN),
	COMBO(combo_up_arrow,    KC_UP),
	COMBO(combo_right_arrow, KC_RIGHT),
};
