#include QMK_KEYBOARD_H

enum sofle_layers {
    /* _M_XYZ = Mac Os, _W_XYZ = Win/Linux */
    _0,
    _1,
    _2,
    _3,
};

enum custom_keycodes {
    KC_QWERTY = SAFE_RANGE,
    KC_COLEMAK,
    KC_PRVWD,
    KC_NXTWD,
    KC_LSTRT,
    KC_LEND,
    KC_DLINE
};

#define HOME_D LALT_T(KC_D)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LGUI_T(KC_T)
#define HOME_R LSFT_T(KC_R)

// Right-hand home row mods
#define HOME_N LSFT_T(KC_N)
#define HOME_E LGUI_T(KC_E)
#define HOME_A LCTL_T(KC_A)
#define HOME_I LALT_T(KC_I)



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_0] = LAYOUT(
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
  KC_NO,   OSL(_2),   KC_G,    KC_P,    KC_M,    KC_NO,                     KC_Z,    KC_B,    KC_U,    KC_Q,    KC_BSPC,  KC_NO,
  LT(_3, KC_ESC),   HOME_D,   HOME_S,    HOME_T,    HOME_R,    KC_L,                     KC_H,    HOME_N,    HOME_E,    HOME_A, HOME_I,  KC_NO,
  KC_NO,  KC_C,   KC_V,    KC_K,    KC_W,    KC_NO, KC_MUTE,     XXXXXXX,KC_F,    KC_F, KC_J,  KC_X, KC_Y,  KC_NO,
                 KC_NO,KC_TAB, KC_SPC, LT(_2, KC_ENT),KC_HYPR,      KC_NO,  OSL(_1) , KC_O, OSM(MOD_LSFT), KC_NO
),
/*
 * COLEMAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   Q  |   W  |   F  |   P  |   G  |                    |   J  |   L  |   U  |   Y  |   ;  | Bspc |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   A  |   R  |   S  |   T  |   D  |-------.    ,-------|   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|  MUTE |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   K  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            | LGUI | LAlt | LCTR |LOWER | /Enter  /       \Space \  |RAISE | RCTR | RAlt | RGUI |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_1] = LAYOUT(
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
  KC_NO,   KC_AT,   KC_MINUS,    KC_LEFT_BRACKET,    KC_RIGHT_BRACKET,    KC_DOLLAR,                     KC_TILDE,    KC_LEFT_ANGLE_BRACKET,    KC_RIGHT_ANGLE_BRACKET,    KC_SLASH,    KC_ASTERISK,  KC_NO,
  KC_HASH,   KC_DQT,   KC_QUOTE,    KC_LEFT_PAREN,    KC_RIGHT_PAREN,    KC_AMPERSAND,                     KC_GRAVE,    KC_DOT,    KC_COLON,    KC_COMMA, KC_SEMICOLON,  KC_NO,
  KC_NO,  KC_PERCENT,   KC_EQUAL,    KC_LEFT_CURLY_BRACE,    KC_RIGHT_CURLY_BRACE,    KC_PIPE, KC_NO,     KC_MEDIA_FAST_FORWARD,KC_PLUS,    KC_QUESTION, KC_EXCLAIM,  KC_BACKSLASH, KC_CIRCUMFLEX,  KC_NO,
                 KC_NO,KC_UNDERSCORE, KC_SPC, KC_NO,KC_NO,      KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO
),
[_2] = LAYOUT(
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_UP,    KC_NO,    KC_NO,                     KC_NO,    KC_7,    KC_8,    KC_9,    KC_TRNS,  KC_NO,
  KC_NO,   KC_NO,   KC_LEFT,    KC_DOWN,    KC_RIGHT,    KC_NO,                     KC_NO,    LSFT_T(KC_4),    LCTL_T(KC_5),    LALT_T(KC_6), KC_0,  KC_NO,
  KC_NO,  KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,     XXXXXXX,KC_NO,    KC_1, KC_2,  KC_3, KC_NO,  KC_NO,
                 KC_NO,KC_NO, KC_NO, KC_NO,KC_NO,      KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO
),
[_3] = LAYOUT(
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,                     KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,
  KC_NO,   KC_NO,   KC_G,    KC_P,    KC_M,    KC_NO,                     KC_Z,    KC_B,    KC_U,    KC_Q,    KC_BSPC,  KC_NO,
  LT(_3, KC_ESC),   HOME_D,   HOME_S,    HOME_T,    HOME_R,    KC_L,                     KC_H,    HOME_N,    HOME_E,    HOME_A, HOME_I,  OSM(MOD_LSFT),
  KC_NO,  KC_C,   KC_V,    KC_K,    KC_W,    KC_NO, KC_MUTE,     XXXXXXX,KC_F,    KC_J, KC_J,  KC_X, KC_Y,  KC_NO,
                 KC_NO,KC_TAB, KC_SPC, LT(_3, KC_ENT),KC_HYPR,      KC_NO,  OSL(_1) , KC_O, KC_NO, KC_NO
),
};

#ifdef OLED_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
}
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
    return false;
}

#endif


#ifdef ENCODER_ENABLE

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    }
    return true;
}

#endif

const uint16_t PROGMEM caps_word_combo[] = {KC_G, KC_Q, COMBO_END};
combo_t key_combos[] = {
    COMBO(caps_word_combo, QK_CAPS_WORD_TOGGLE),
};

