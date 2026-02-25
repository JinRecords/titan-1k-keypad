#include QMK_KEYBOARD_H

enum custom_keycodes {
    HELLO = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT(HELLO)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HELLO:
            if (record->event.pressed) {
                SEND_STRING("Hello World!");
                wait_ms(2000);
                for (int i = 0; i < 11; i++) {
                    tap_code(KC_BSPC);
                }
                wait_ms(100);
                SEND_STRING("Get started: https://github.com/JinRecords/titan-1k-keypad");
            }
            return false;
    }
    return true;
}
