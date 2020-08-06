#undef IS_COMMAND
#define IS_COMMAND() (get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_LALT)))
#define MAGIC_KEY_BOOTLOADER     PPLS
