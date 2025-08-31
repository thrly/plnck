/* COMBOS */
const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM combo_underscore[] = {KC_N, KC_M, COMBO_END};
const uint16_t PROGMEM combo_dash[] = {KC_R, KC_T, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_esc, KC_ESC),
    COMBO(combo_del, KC_DEL),
    COMBO(combo_underscore, LSFT(KC_MINUS)),
    COMBO(combo_dash, KC_MINUS),
};
