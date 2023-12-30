/*
 * File:   utils.c
 * Author: Ted Salmon <tass2001@gmail.com>
 * Description:
 *     Helper utils that may be useful in more than one place
 */
#ifndef UTILS_H
#define UTILS_H
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <xc.h>
#include "config.h"

#define UTILS_CHAR_LATIN_CAPITAL_A_WITH_GRAVE 0xC380
#define UTILS_CHAR_LATIN_CAPITAL_A_WITH_ACUTE 0xC381
#define UTILS_CHAR_LATIN_CAPITAL_A_WITH_CIRCUMFLEX 0xC382
#define UTILS_CHAR_LATIN_CAPITAL_A_WITH_TILDE 0xC383
#define UTILS_CHAR_LATIN_CAPITAL_A_WITH_DIAERESIS 0xC384
#define UTILS_CHAR_LATIN_CAPITAL_A_WITH_RING_ABOVE 0xC385
#define UTILS_CHAR_LATIN_CAPITAL_AE 0xC386
#define UTILS_CHAR_LATIN_CAPITAL_C_WITH_CEDILLA 0xC387
#define UTILS_CHAR_LATIN_CAPITAL_E_WITH_GRAVE 0xC388
#define UTILS_CHAR_LATIN_CAPITAL_E_WITH_ACUTE 0xC389
#define UTILS_CHAR_LATIN_CAPITAL_E_WITH_CIRCUMFLEX 0xC38A
#define UTILS_CHAR_LATIN_CAPITAL_E_WITH_DIAERESIS 0xC38B
#define UTILS_CHAR_LATIN_CAPITAL_I_WITH_GRAVE 0xC38C
#define UTILS_CHAR_LATIN_CAPITAL_I_WITH_ACUTE 0xC38D
#define UTILS_CHAR_LATIN_CAPITAL_I_WITH_CIRCUMFLEX 0xC38E
#define UTILS_CHAR_LATIN_CAPITAL_I_WITH_DIAERESIS 0xC38F
#define UTILS_CHAR_LATIN_CAPITAL_ETH 0xC390
#define UTILS_CHAR_LATIN_CAPITAL_N_WITH_TILDE 0xC391
#define UTILS_CHAR_LATIN_CAPITAL_O_WITH_GRAVE 0xC392
#define UTILS_CHAR_LATIN_CAPITAL_O_WITH_ACUTE 0xC393
#define UTILS_CHAR_LATIN_CAPITAL_O_WITH_CIRCUMFLEX 0xC394
#define UTILS_CHAR_LATIN_CAPITAL_O_WITH_TILDE 0xC395
#define UTILS_CHAR_LATIN_CAPITAL_O_WITH_DIAERESIS 0xC396
#define UTILS_CHAR_MULTIPLICATION_SIGN 0xC397
#define UTILS_CHAR_LATIN_CAPITAL_O_WITH_STROKE 0xC398
#define UTILS_CHAR_LATIN_CAPITAL_U_WITH_GRAVE 0xC399
#define UTILS_CHAR_LATIN_CAPITAL_U_WITH_ACUTE 0xC39A
#define UTILS_CHAR_LATIN_CAPITAL_U_WITH_CIRCUMFLEX 0xC39B
#define UTILS_CHAR_LATIN_CAPITAL_U_WITH_DIAERESIS 0xC39C
#define UTILS_CHAR_LATIN_CAPITAL_Y_WITH_ACUTE 0xC39D
#define UTILS_CHAR_LATIN_CAPITAL_THORN 0xC39E
#define UTILS_CHAR_LATIN_SMALL_SHARP_S 0xC39F
#define UTILS_CHAR_LATIN_SMALL_A_WITH_GRAVE 0xC3A0
#define UTILS_CHAR_LATIN_SMALL_A_WITH_ACUTE 0xC3A1
#define UTILS_CHAR_LATIN_SMALL_A_WITH_CIRCUMFLEX 0xC3A2
#define UTILS_CHAR_LATIN_SMALL_A_WITH_TILDE 0xC3A3
#define UTILS_CHAR_LATIN_SMALL_A_WITH_DIAERESIS 0xC3A4
#define UTILS_CHAR_LATIN_SMALL_A_WITH_RING_ABOVE 0xC3A5
#define UTILS_CHAR_LATIN_SMALL_AE 0xC3A6
#define UTILS_CHAR_LATIN_SMALL_C_WITH_CEDILLA 0xC3A7
#define UTILS_CHAR_LATIN_SMALL_E_WITH_GRAVE 0xC3A8
#define UTILS_CHAR_LATIN_SMALL_E_WITH_ACUTE 0xC3A9
#define UTILS_CHAR_LATIN_SMALL_E_WITH_CIRCUMFLEX 0xC3AA
#define UTILS_CHAR_LATIN_SMALL_E_WITH_DIAERESIS 0xC3AB
#define UTILS_CHAR_LATIN_SMALL_I_WITH_GRAVE 0xC3AC
#define UTILS_CHAR_LATIN_SMALL_I_WITH_ACUTE 0xC3AD
#define UTILS_CHAR_LATIN_SMALL_I_WITH_CIRCUMFLEX 0xC3AE
#define UTILS_CHAR_LATIN_SMALL_I_WITH_DIAERESIS 0xC3AF
#define UTILS_CHAR_LATIN_SMALL_ETH 0xC3B0
#define UTILS_CHAR_LATIN_SMALL_N_WITH_TILDE 0xC3B1
#define UTILS_CHAR_LATIN_SMALL_O_WITH_GRAVE 0xC3B2
#define UTILS_CHAR_LATIN_SMALL_O_WITH_ACUTE 0xC3B3
#define UTILS_CHAR_LATIN_SMALL_O_WITH_CIRCUMFLEX 0xC3B4
#define UTILS_CHAR_LATIN_SMALL_O_WITH_TILDE 0xC3B5
#define UTILS_CHAR_LATIN_SMALL_O_WITH_DIAERESIS 0xC3B6
#define UTILS_CHAR_DIVISION_SIGN 0xC3B7
#define UTILS_CHAR_LATIN_SMALL_O_WITH_STROKE 0xC3B8
#define UTILS_CHAR_LATIN_SMALL_U_WITH_GRAVE 0xC3B9
#define UTILS_CHAR_LATIN_SMALL_U_WITH_ACUTE 0xC3BA
#define UTILS_CHAR_LATIN_SMALL_U_WITH_CIRCUMFLEX 0xC3BB
#define UTILS_CHAR_LATIN_SMALL_U_WITH_DIAERESIS 0xC3BC
#define UTILS_CHAR_LATIN_SMALL_Y_WITH_ACUTE 0xC3BD
#define UTILS_CHAR_LATIN_SMALL_THORN 0xC3BE
#define UTILS_CHAR_LATIN_SMALL_Y_WITH_DIAERESIS 0xC3BF
#define UTILS_CHAR_LATIN_SMALL_CAPITAL_R 0xCA80
#define UTILS_CHAR_CYRILLIC_CAPITAL_IO 0xD081
#define UTILS_CHAR_CYRILLIC_UA_CAPITAL_IE 0xD084
#define UTILS_CHAR_CYRILLIC_BY_UA_CAPITAL_I 0xD086
#define UTILS_CHAR_CYRILLIC_CAPITAL_YI 0xD087
#define UTILS_CHAR_CYRILLIC_CAPITAL_SHORT_U 0xD08E
#define UTILS_CHAR_CYRILLIC_CAPITAL_A 0xD090
#define UTILS_CHAR_CYRILLIC_CAPITAL_BE 0xD091
#define UTILS_CHAR_CYRILLIC_CAPITAL_VE 0xD092
#define UTILS_CHAR_CYRILLIC_CAPITAL_GHE 0xD093
#define UTILS_CHAR_CYRILLIC_CAPITAL_DE 0xD094
#define UTILS_CHAR_CYRILLIC_CAPITAL_YE 0xD095
#define UTILS_CHAR_CYRILLIC_CAPITAL_ZHE 0xD096
#define UTILS_CHAR_CYRILLIC_CAPITAL_ZE 0xD097
#define UTILS_CHAR_CYRILLIC_CAPITAL_I 0xD098
#define UTILS_CHAR_CYRILLIC_CAPITAL_SHORT_I 0xD099
#define UTILS_CHAR_CYRILLIC_CAPITAL_KA 0xD09A
#define UTILS_CHAR_CYRILLIC_CAPITAL_EL 0xD09B
#define UTILS_CHAR_CYRILLIC_CAPITAL_EM 0xD09C
#define UTILS_CHAR_CYRILLIC_CAPITAL_EN 0xD09D
#define UTILS_CHAR_CYRILLIC_CAPITAL_O 0xD09E
#define UTILS_CHAR_CYRILLIC_CAPITAL_PE 0xD09F
#define UTILS_CHAR_CYRILLIC_CAPITAL_ER 0xD0A0
#define UTILS_CHAR_CYRILLIC_CAPITAL_ES 0xD0A1
#define UTILS_CHAR_CYRILLIC_CAPITAL_TE 0xD0A2
#define UTILS_CHAR_CYRILLIC_CAPITAL_U 0xD0A3
#define UTILS_CHAR_CYRILLIC_CAPITAL_EF 0xD0A4
#define UTILS_CHAR_CYRILLIC_CAPITAL_HA 0xD0A5
#define UTILS_CHAR_CYRILLIC_CAPITAL_TSE 0xD0A6
#define UTILS_CHAR_CYRILLIC_CAPITAL_CHE 0xD0A7
#define UTILS_CHAR_CYRILLIC_CAPITAL_SHA 0xD0A8
#define UTILS_CHAR_CYRILLIC_CAPITAL_SCHA 0xD0A9
#define UTILS_CHAR_CYRILLIC_CAPITAL_HARD_SIGN 0xD0AA
#define UTILS_CHAR_CYRILLIC_CAPITAL_YERU 0xD0AB
#define UTILS_CHAR_CYRILLIC_CAPITAL_SOFT_SIGN 0xD0AC
#define UTILS_CHAR_CYRILLIC_CAPITAL_E 0xD0AD
#define UTILS_CHAR_CYRILLIC_CAPITAL_YU 0xD0AE
#define UTILS_CHAR_CYRILLIC_CAPITAL_YA 0xD0AF
#define UTILS_CHAR_CYRILLIC_SMALL_A 0xD0B0
#define UTILS_CHAR_CYRILLIC_SMALL_BE 0xD0B1
#define UTILS_CHAR_CYRILLIC_SMALL_VE 0xD0B2
#define UTILS_CHAR_CYRILLIC_SMALL_GHE 0xD0B3
#define UTILS_CHAR_CYRILLIC_SMALL_DE 0xD0B4
#define UTILS_CHAR_CYRILLIC_SMALL_IE 0xD0B5
#define UTILS_CHAR_CYRILLIC_SMALL_ZHE 0xD0B6
#define UTILS_CHAR_CYRILLIC_SMALL_ZE 0xD0B7
#define UTILS_CHAR_CYRILLIC_SMALL_I 0xD0B8
#define UTILS_CHAR_CYRILLIC_SMALL_SHORT_I 0xD0B9
#define UTILS_CHAR_CYRILLIC_SMALL_KA 0xD0BA
#define UTILS_CHAR_CYRILLIC_SMALL_EL 0xD0BB
#define UTILS_CHAR_CYRILLIC_SMALL_EM 0xD0BC
#define UTILS_CHAR_CYRILLIC_SMALL_EN 0xD0BD
#define UTILS_CHAR_CYRILLIC_SMALL_O 0xD0BE
#define UTILS_CHAR_CYRILLIC_SMALL_PE 0xD0BF
#define UTILS_CHAR_CYRILLIC_SMALL_ER 0xD180
#define UTILS_CHAR_CYRILLIC_SMALL_ES 0xD181
#define UTILS_CHAR_CYRILLIC_SMALL_TE 0xD182
#define UTILS_CHAR_CYRILLIC_SMALL_U 0xD183
#define UTILS_CHAR_CYRILLIC_SMALL_EF 0xD184
#define UTILS_CHAR_CYRILLIC_SMALL_HA 0xD185
#define UTILS_CHAR_CYRILLIC_SMALL_TSE 0xD186
#define UTILS_CHAR_CYRILLIC_SMALL_CHE 0xD187
#define UTILS_CHAR_CYRILLIC_SMALL_SHA 0xD188
#define UTILS_CHAR_CYRILLIC_SMALL_SHCHA 0xD189
#define UTILS_CHAR_CYRILLIC_SMALL_LEFT_HARD_SIGN 0xD18A
#define UTILS_CHAR_CYRILLIC_SMALL_YERU 0xD18B
#define UTILS_CHAR_CYRILLIC_SMALL_SOFT_SIGN 0xD18C
#define UTILS_CHAR_CYRILLIC_SMALL_E 0xD18D
#define UTILS_CHAR_CYRILLIC_SMALL_YU 0xD18E
#define UTILS_CHAR_CYRILLIC_SMALL_YA 0xD18F
#define UTILS_CHAR_CYRILLIC_SMALL_IO 0xD191
#define UTILS_CHAR_CYRILLIC_UA_SMALL_IE 0xD194
#define UTILS_CHAR_CYRILLIC_BY_UA_SMALL_I 0xD196
#define UTILS_CHAR_CYRILLIC_SMALL_YI 0xD197
#define UTILS_CHAR_CYRILLIC_SMALL_SHORT_U 0xD19E
#define UTILS_CHAR_HYPHEN 0xE28090
#define UTILS_CHAR_LEFT_SINGLE_QUOTATION_MARK 0xE28098
#define UTILS_CHAR_RIGHT_SINGLE_QUOTATION_MARK 0xE28099
#define UTILS_CHAR_HORIZONTAL_ELLIPSIS 0xE280A6
#define UTILS_MAX_RPOR_PIN 31
#define UTILS_DISPLAY_TEXT_SIZE 255
#define UTILS_PIN_TEL_MUTE 0
#define UTILS_PIN_TEL_ON 1

#define DATETIME_YEAR 0
#define DATETIME_MON 1
#define DATETIME_DAY 2
#define DATETIME_HOUR 3
#define DATETIME_MIN 4
#define DATETIME_SEC 5

/* Check if a bit is set in a byte */
#define CHECK_BIT(var, pos) ((var) & (1 <<(pos)))
/* Clear a set bit in a byte */
#define CLEAR_BIT(var, pos) ((var) & ~(1 << pos))
/* Set a bit in a byte */
#define SET_BIT(var, pos) ((var) | (1 << pos))
/* Return a programmable output port register */
#define GET_RPOR(num) (((uint16_t *) &RPOR0) + num)
/*
 * UtilsAbstractDisplayValue_t
 *  This is a struct to hold text values to be displayed
 *  text: The text to display
 *  index: A variable to track what the last displayed index of text was
 *  length: The length of the text
 *  status: 0 for inactive and 1 for active
 *  timeout: The amount of iterations to display the text for. -1 is indefinite
 */
typedef struct UtilsAbstractDisplayValue_t {
    char text[UTILS_DISPLAY_TEXT_SIZE];
    uint8_t index;
    uint8_t length;
    uint8_t status;
    int8_t timeout;
} UtilsAbstractDisplayValue_t;
uint8_t UtilsConvertCmToIn(uint8_t);
UtilsAbstractDisplayValue_t UtilsDisplayValueInit(char *, uint8_t);
uint8_t UtilsGetBoardVersion();
uint8_t UtilsGetMinByte(uint8_t *, uint8_t);
uint8_t UtilsGetUnicodeByteLength(uint8_t);
void UtilsNormalizeText(char *, const char *, uint16_t);
void UtilsRemoveSubstring(char *, const char *);
void UtilsReset();
void UtilsSetRPORMode(uint8_t, uint16_t);
void UtilsSetPinMode(uint8_t, uint8_t);
int8_t UtilsStricmp(const char *, const char *);
char * UtilsStrncpy(char *, const char *, size_t);
unsigned char UtilsStrToHex(char *);
uint8_t UtilsStrToInt(char *);
char * UtilsTransliterateUnicodeToASCII(uint32_t);
char * UtilsTransliterateExtendedASCIIToASCII(uint32_t);
unsigned char UtilsConvertCyrillicUnicodeToExtendedASCII(uint32_t);
#endif /* UTILS_H */
