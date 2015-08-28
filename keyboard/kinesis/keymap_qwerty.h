/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
* 
* ,-------------------------------------------------------------------------------------------------------------------.
* | Esc    |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 |  PSCR|  SLCK|  PAUS|  Key |  Boot  |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* | =+     |  1!  |  2@  |  3#  |  4$  |  5%  |                           |  6^  |  7&  |  8*  |  9(  |  0)  | -_     |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | Tab    |   Q  |   W  |   E  |   R  |   T  |                           |   Y  |   U  |   I  |   O  |   P  | \|     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Caps   |   A  |   S  |   D  |   F  |   G  |                           |   H  |   J  |   K  |   L  |  ;:  | '"     |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | Shift  |   Z  |   X  |   C  |   V  |   B  |                           |   N  |   M  |  ,.  |  .>  |  /?  | Shift  |
* `--------+------+------+------+------+-------                           `------+------+------+------+------+--------'
*          | `~   | Ins  | Left | Right|                                         | Down |  Up  |  [{  |  ]}  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | Shift| Gui  |         | Alt  | Ctrl |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | Home |         | PgUp |      |      |
*                                 | BkSp | Del  |------|         |------|Return| Space|
*                                 |      |      | End  |         | PgDn |      |      |
*                                 `--------------------'         `--------------------'
*
* Keymap: Fn/Keypad Layer
*
* ,-------------------------------------------------------------------------------------------------------------------.
* |   Esc  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F8  |  F9  |  F10 |  F12 | PSCR | SLCK | PAUS | KP   | PGM    |
* |--------+------+------+------+------+------+---------------------------+------+------+------+------+------+--------|
* |   Esc  |  NO  |  NO  |  NO  |  NO  |  NO  |                           |  NO  |  NumL|   =  |   /  |   *  | TRNS   |
* |--------+------+------+------+------+------|                           +------+------+------+------+------+--------|
* | TRNS   |  NO  |  NO  |  NO  |  NO  | Vol+ |                           | Next |   7  |   8  |   9  |   -  | TRNS   |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | NO     | PgUp | Home |  Up  |  End | Mute |                           | Play |   4  |   5  |   6  |   +  | TRNS   |
* |--------+------+------+------+------+------|                           |------+------+------+------+------+--------|
* | TRNS   | PgDn | Left | Down | Right| Vol- |                           | Prev |   1  |   2  |   3  | KEnt | TRNS   |
* `--------+------+------+------+------+------'                           `------+------+------+------+------+--------'
*          |  \   | M LB | M Lt | M Rt |                                         | M Dn | M Up | M RB |  NO  |
*          `---------------------------'                                         `---------------------------'
*                                        ,-------------.         ,-------------.
*                                        | TRNS | TRNS |         | TRNS | =    |
*                                 ,------|------|------|         |------+------+------.
*                                 |      |      | TRNS |         | TRNS |      |      |
*                                 | TRNS | Ins  |------|         |------| KEnt |   0  |
*                                 |      |      | Caps |         | NumL |      |      |
*                                 `--------------------'         `--------------------'
*
*/


static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default */
    KEYMAP(
           NO,  NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO,
           EQL, 1   ,2   ,3   ,4   ,5   ,
           TAB, Q   ,W   ,E   ,R   ,T   ,
           CAPS,A   ,S   ,D   ,F   ,G   ,
           LSFT,Z   ,X   ,C   ,V   ,B   ,
                GRV ,INS ,LEFT,RGHT,
                               FN0,RGUI,
                                    HOME,
                          BSPC,DEL ,END ,
           F9  ,F10 ,F11 ,F12 ,PSCR,SLCK,PAUS,FN1 ,FN0 ,
           6   ,7   ,8   ,9   ,0   ,MINS,
           Y   ,U   ,I   ,O   ,P   ,BSLS,
           H   ,J   ,K   ,L   ,SCLN,QUOT,
           N   ,M   ,COMM,DOT ,SLSH,RSFT,
                DOWN  ,UP,LBRC,RBRC,
           LALT,LCTL,
           PGUP,
           PGDN,ENT ,SPC
    ),
    /* Layer 1: Symbols */
    KEYMAP(
           TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
           ESC, F1  ,F2  ,F3  ,F4  ,F5  ,
           TRNS,NO  ,NO  ,NO  ,NO  ,VOLU,
           NO  ,PGUP,BTN1,BTN2,BTN3 ,MUTE,
           TRNS,PGDN,LEFT,DOWN,RGHT,VOLD,
                LCTL,HOME,END ,TRNS,
                          TRNS,TRNS,
                               TRNS,
                     TRNS,TRNS,TRNS,
           F9  ,F10 ,F11 ,F12 ,PSCR,SLCK,PAUS,FN1 ,FN0 ,
           F6  ,F7  ,F8,  F9,  F10, F11,
           MNXT,P7  ,MS_U,P9  ,PMNS,TRNS,
           MPLY,MS_L,MS_D,MS_R,PPLS,TRNS,
           MPRV,P1  ,P2  ,P3  ,PENT,TRNS,
                PGUP,PGDN,PDOT,PENT,
           TRNS,PEQL,
           TRNS,
           NLCK,PENT,P0  
    ),};
enum function_id {
    BOOTLOAD_KEY,
};
static const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
};
void action_function(keyrecord_t *event, uint8_t id, uint8_t opt) {
    if (id == BOOTLOAD_KEY) {
        clear_keyboard();
        _delay_ms(250);
        bootloader_jump();
    }
}
