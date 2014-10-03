static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ESC   |   1  |   2  |   3  |   4  |   5  |  6   |           |   7  |   8  |   9  |   0  |   -  |   =  |  BkSp  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TAB    |   Q  |   W  |   E  |   R  |   T  |  F10 |           |   [  |   Y  |   U  |   I  |   O  |   P  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | {L3}   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
     * |--------+------+------+------+------+------|  F11 |           |   ]  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui | LEFT | RIGHT|  `	 |ALTEnt|                                       | PGUP | PGDN |  UP  | DOWN | RGui |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | Mute |  INS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LCTRL|       | RALT |      |      |
     *                                 | SPACE|  DEL |------|       |------| Enter| Space|
     *                                 |      |      | LALT |       | RCTRL|      |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // layout: layer 0: qwerty
        // left hand
        ESC,    1,      2,      3,      4,      5,      6,
        TAB,   	Q,      W,      E,      R,      T,      F10,
        FN3,    A,      S,      D,      F,      G,
        LSFT,   Z,      X,      C,      V,      B,      F11,
        LGUI,   LEFT,   RIGHT,  GRV,    FN5,
                                                        HOME,   END,
                                                                LCTL,
                                                SPC,    DEL,    LALT,
        // right hand
                7,      8,      9,      0,      MINS,   EQL,    BSPC,
                LBRC,   Y,      U,      I,      O,      P,      BSLS,
                        H,      J,      K,      L,      SCLN,   QUOT,
                RBRC,   N,      M,      COMM,   DOT,    SLSH,   RSFT,
                                PGUP,   PGDN,   UP,		DOWN,   RGUI,
        MUTE,   INS,
        RALT,
        RCTL,   ENT,    SPC
    ),

    /* Keymap 1: WorkMan
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ESC   |   1  |   2  |   3  |   4  |   5  |  6   |           |   7  |   8  |   9  |   0  |   -  |   =  |  BkSp  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TAB    |   Q  |   D  |   R  |   W  |   B  |  F10 |           |   [  |   J  |   F  |   U  |   P  |   ;  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | {L3}   |   A  |   S  |   H  |   T  |   G  |------|           |------|   Y  |   N  |   E  |   O  |   I  |   '    |
     * |--------+------+------+------+------+------|  F11 |           |   ]  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   M  |   C  |   V  |      |           |      |   K  |   L  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui | LEFT | RIGHT|  `	 |ALTEnt|                                       | PGUP | PGDN |  UP  | DOWN | RGui |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | Mute |  INS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LCTRL|       | RALT |      |      |
     *                                 | SPACE|  DEL |------|       |------| Enter| Space|
     *                                 |      |      | LALT |       | RCTRL|      |      |
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP(  // layout: layer 1: workman
        // left hand
        ESC,    1,      2,      3,      4,      5,      6,
        TAB,   	Q,      D,      R,      W,      B,      F10,
        FN3,    A,      S,      H,      T,      G,
        LSFT,   Z,      X,      M,      C,      V,      F11,
        LGUI,   LEFT,   RIGHT,  GRV,    FN5,
                                                        HOME,   END,
                                                                LCTL,
                                                SPC,    DEL,    LALT,
        // right hand
                7,      8,      9,      0,      MINS,   EQL,    BSPC,
                LBRC,   J,      F,      U,      P,      SCLN,   BSLS,
                        Y,      N,      E,      O,      I,      QUOT,
                RBRC,   K,      L,      COMM,   DOT,    SLSH,   RSFT,
                                PGUP,   PGDN,   UP,		DOWN,   RGUI,
        MUTE,   INS,
        RALT,
        RCTL,   ENT,    SPC
    ),
    
	
	 /* Keymap 2: WorkMan (programmer)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ESC   |  <.> |  <.> |  <.> |  <.> |  <.> | <.>  |           |  <.> |  <.> |  <.> |  <.> |   -  |   =  |  BkSp  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TAB    |   Q  |   D  |   R  |   W  |   B  |  F10 |           |  <.> |   J  |   F  |   U  |   P  |   ;  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | {L3}   |   A  |   S  |   H  |   T  |   G  |------|           |------|   Y  |   N  |   E  |   O  |   I  |  <.>   |
     * |--------+------+------+------+------+------|  F11 |           |  <.> |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   M  |   C  |   V  |      |           |      |   K  |   L  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | LGui | LEFT | RIGHT|  `	 |ALTEnt|                                       | PGUP | PGDN |  UP  | DOWN | RGui |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | HOME |  END |       | Mute |  INS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | LCTRL|       | RALT |      |      |
     *                                 | SPACE|  DEL |------|       |------| Enter| Space|
     *                                 |      |      | LALT |       | RCTRL|      |      |
     *                                 `--------------------'       `--------------------'
     */
	KEYMAP(  // layout: layer 2: workman (programmer)
        // left hand
        ESC,    FN6,    FN7,    FN8,    FN9,    FN10,   FN11,
        TAB,   	Q,      D,      R,      W,      B,      F10,
        FN3,    A,      S,      H,      T,      G,
        LSFT,   Z,      X,      M,      C,      V,      F11,
        LGUI,   LEFT,   RIGHT,  GRV,    FN5,
                                                        HOME,   END,
                                                                LCTL,
                                                SPC,    DEL,    LALT,
        // right hand
                FN12,   FN13,   FN14,   FN15,   MINS,   EQL,    BSPC,
                FN16,   J,      F,      U,      P,      SCLN,   BSLS,
                        Y,      N,      E,      O,      I,      FN18,
                FN17,   K,      L,      COMM,   DOT,    SLSH,   RSFT,
                                PGUP,   PGDN,   UP,		DOWN,   RGUI,
        MUTE,   INS,
        RALT,
        RCTL,   ENT,    SPC
    ),
	
	
	
		 /* Keymap 3: F-Key layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  TRNS  |  F1  |  F2  |  F3  |  F4  |  F5  | F6   |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |  TRNS  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | TRNS   | TRNS | TRNS | TRNS | TRNS | TRNS |      |           | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |  TRNS  |
     * |--------+------+------+------+------+------| {L1} |           |      |------+------+------+------+------+--------|
     * |  TNSY  | TRNS | TRNS | TRNS | TRNS | TRNS |------|           |------| TRNS | TRNS | TRNS | TRNS | TRNS |  TRNS  |
     * |--------+------+------+------+------+------| {L2} |           | TRNS |------+------+------+------+------+--------|
     * | TRNS   | TRNS | TRNS | TRNS | TRNS | TRNS |      |           |      | TRNS | TRNS | TRNS | TRNS | TRNS |  TRNS  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | TRNS | TRNS | TRNS | TRNS | TRNS |                                       | TRNS | TRNS | TRNS | TRNS | TRNS |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | {L0} | TRNS |       | TRNS | TRNS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 | TRNS | TRNS |------|       |------| TRNS | TRNS |
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 `--------------------'       `--------------------'
     */
    KEYMAP(  // layout: layer 3: F-keys instead of numbers
        // left hand
        TRNS,	F1,		F2,		F3,		F4,		F5,		F6,
        TRNS,	TRNS,	TRNS,	TRNS,   TRNS,   TRNS,   FN1,
        FN19,	TRNS,	TRNS,	TRNS,   TRNS,   TRNS,
        TRNS,	TRNS,	TRNS,	TRNS,   TRNS,   TRNS,   FN2,
        TRNS,	TRNS,	TRNS,	TRNS,   TRNS,
                                                        FN0,    TRNS,
                                                                TRNS,
                                                TRNS,   TRNS,   TRNS,
        // right hand
                F7,     F8,     F9,     F10,    F11,    F12,    TRNS,
                TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
                        TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
                TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
                                TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
        TRNS,   TRNS,
        TRNS,
        TRNS,   TRNS,	TRNS
    ),

	
	
	    /* Keymap 4: Function/Keypad/Mouse/Debug
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   FN5  |  F13 |  F14 |  F15 |  F16 |  F17 | TRNS |           |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   F7   |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  TRNS  | WH_L | MS_U | WL_R | WL_U | BTN4 |  Tab |           | SPACE|  F12 |  KP7 |  KP8 |  KP9 |   -  |  TRNS  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  TRNS  | MS_L | MS_D | MS_R | WL_D | BTN5 |------|           |------|   /  |  KP4 |  KP7 |  KP6 |   +  |  TRNS  |
     * |--------+------+------+------+------+------| BkSp |           | ENTER|------+------+------+------+------+--------|
     * |  TRNS  | BTN1 | BTN3 | BTN2 | BTN1 |  F18 |      |           |      |   *  |  KP1 |  KP2 |  KP3 | TRNS |  TRNS  |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   | TRNS | PRTSC| PAUSE|  NO  | TRNS |                                       |  KP0 |  PDOT| TRNS | TRNS | TRNS |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        | TRNS | TRNS |       | TRNS | TRNS |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 |  F8  |  F10 |------|       |------|  F9  |  F11 |
     *                                 |      |      | TRNS |       | TRNS |      |      |
     *                                 `--------------------'       `--------------------'
      
    KEYMAP(  // layout: layer 4: F-keys instead of numbers
        // left hand
        FN5,    F13,    F14,    F15,    F16,    F17,    TRNS,
        TRNS,   WH_L,   MS_U,   WH_R,   WH_U,   BTN4,   TAB,
        TRNS,   MS_L,   MS_D,   MS_R,   WH_D,   BTN5,
        TRNS,   BTN1,   BTN3,   BTN2,   BTN1,   F18,    BSPC,
        TRNS,   PSCR,   PAUS,   NO,     TRNS,
                                                        TRNS,   TRNS,
                                                                TRNS,
                                                F8,     F10,    TRNS,
        // right hand
                F1,     F2,     F3,     F4,     F5,     F6,     F7,
                SPC,    F12,    P7,     P8,     P9,     PMNS,   TRNS,
                        PSLS,   P4,     P5,     P6,     PPLS,   TRNS,
                ENT,    PAST,   P1,     P2,     P3,     TRNS,   TRNS,
                                P0,     PDOT,   TRNS,   TRNS,   TRNS,
        TRNS,   TRNS,
        TRNS,
        TRNS,   F9,     F11
    ),
	*/
	
/*
    KEYMAP(  // layout: layer N: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

#define TAPPING_TOGGLE 2

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {

	ACTION_DEFAULT_LAYER(0),						// FN0 - default layer 0 (qwerty)
	ACTION_DEFAULT_LAYER(1),						// FN1 - default layer 1 (workman)
	ACTION_DEFAULT_LAYER(2),						// FN2 - default layer 2 (workman programmer)

	ACTION_LAYER_TAP_KEY(3, KC_FN4),				// FN3 - momentary layer 3 (fn-keys)
	ACTION_LAYER_INVERT(3),							// FN4 - invert layer 3 (fn-keys)

	ACTION_MODS_KEY(MOD_LALT, KC_ENT),             // FN5 - ALT+Enter
	
	
	ACTION_MODS_KEY(MOD_LSFT, KC_1),				// FN6 - Programmer Mode 1
	ACTION_MODS_KEY(MOD_LSFT, KC_2),				// FN7 - Programmer Mode 2
	ACTION_MODS_KEY(MOD_LSFT, KC_3),				// FN8 - Programmer Mode 3
	ACTION_MODS_KEY(MOD_LSFT, KC_4),				// FN9 - Programmer Mode 4
	ACTION_MODS_KEY(MOD_LSFT, KC_5),				// FN10 - Programmer Mode 5
	ACTION_MODS_KEY(MOD_LSFT, KC_6),				// FN11 - Programmer Mode 6
	ACTION_MODS_KEY(MOD_LSFT, KC_7),				// FN12 - Programmer Mode 7
	ACTION_MODS_KEY(MOD_LSFT, KC_8),				// FN13 - Programmer Mode 8
	ACTION_MODS_KEY(MOD_LSFT, KC_9),				// FN14 - Programmer Mode 9
	ACTION_MODS_KEY(MOD_LSFT, KC_0),				// FN15 - Programmer Mode 0
	ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN16 - Programmer Mode [
	ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN17 - Programmer Mode [
	ACTION_MODS_KEY(MOD_LSFT, KC_QUOT),             // FN18 - Programmer Mode '	

	    
    //**************************************************************************
    
    ACTION_FUNCTION(TEENSY_KEY),                    // FN19 - Teensy key
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

