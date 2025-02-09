#include QMK_KEYBOARD_H

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

#define KC_OSH OSM(MOD_HYPR)
#define KC_OSS OSM(MOD_LSFT)
#define KC_OSC OSM(MOD_LCTL)
#define KC_OSA OSM(MOD_LALT)
#define KC_OSG OSM(MOD_LGUI)
#define KC_OSR OSM(MOD_RALT)

#define TO_BAS TO(0)
#define TO_OTH MO(1)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//    ┌─────┬─────┬─────┬────────┬─────┐   ┌──────┬─────┬─────┬─────┬─────┐
//    │  q  │  w  │  e  │   r    │  t  │   │  y   │  u  │  i  │  o  │  p  │
//    ├─────┼─────┼─────┼────────┼─────┤   ├──────┼─────┼─────┼─────┼─────┤
//    │ g_A │ a_S │ c_D │  s_F   │ aLG │   │ aLH  │ s_J │ c_K │ a_L │ gSC │
//    ├─────┼─────┼─────┼────────┼─────┤   ├──────┼─────┼─────┼─────┼─────┤
//    │  z  │ rAX │  c  │   v    │  b  │   │  n   │  m  │  ,  │ rAD │  /  │
//    └─────┴─────┴─────┼────────┼─────┤   ├──────┼─────┼─────┴─────┴─────┘
//                      │ TO_OTH │ spc │   │ bspc │ ent │
//                      └────────┴─────┘   └──────┴─────┘
[0] = LAYOUT(
  KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,     KC_Y    , KC_U   , KC_I    , KC_O   , KC_P   ,
  KC_G_A , KC_A_S , KC_C_D , KC_S_F , KC_ALG ,     KC_ALH  , KC_S_J , KC_C_K  , KC_A_L , KC_GSC ,
  KC_Z   , KC_RAX , KC_C   , KC_V   , KC_B   ,     KC_N    , KC_M   , KC_COMM , KC_RAD , KC_SLSH,
                             TO_OTH , KC_SPC ,     KC_BSPC , KC_ENT
),

//    ┌─────────┬────┬────┬────────┬─────┐   ┌──────┬──────┬──────┬────┬──────┐
//    │   no    │ no │ no │   no   │ no  │   │ volu │ mstp │ mply │ no │ bRIU │
//    ├─────────┼────┼────┼────────┼─────┤   ├──────┼──────┼──────┼────┼──────┤
//    │ QK_BOOT │ no │ no │   no   │ no  │   │ vold │ mprv │ mnxt │ no │ bRID │
//    ├─────────┼────┼────┼────────┼─────┤   ├──────┼──────┼──────┼────┼──────┤
//    │   no    │ no │ no │   no   │ no  │   │ mute │  no  │  no  │ no │  no  │
//    └─────────┴────┴────┼────────┼─────┤   ├──────┼──────┼──────┴────┴──────┘
//                        │ TO_BAS │ spc │   │ bspc │ ent  │
//                        └────────┴─────┘   └──────┴──────┘
[1] = LAYOUT(
  KC_NO   , KC_NO , KC_NO , KC_NO  , KC_NO  ,     KC_VOLU , KC_MSTP , KC_MPLY , KC_NO , KC_BRIU,
  QK_BOOT , KC_NO , KC_NO , KC_NO  , KC_NO  ,     KC_VOLD , KC_MPRV , KC_MNXT , KC_NO , KC_BRID,
  KC_NO   , KC_NO , KC_NO , KC_NO  , KC_NO  ,     KC_MUTE , KC_NO   , KC_NO   , KC_NO , KC_NO  ,
                            TO_BAS , KC_SPC ,     KC_BSPC , KC_ENT
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
