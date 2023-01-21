/* SPDX-License-Identifier:  MIT
 * Copyright 2021-2023 Jorengarenar
 */

#ifndef ANSI_ESC_SEQ_H_
#define ANSI_ESC_SEQ_H_

// C0 control codes {{{1

#define  ANSI_BEL  "\a"
#define  ANSI_BS   "\b"
#define  ANSI_HT   "\t"
#define  ANSI_LF   "\n"
#define  ANSI_FF   "\f"
#define  ANSI_CR   "\r"
#define  ANSI_ESC  "\033"

// Fe Escape sequences {{{1

#define  ANSI_SS2  ANSI_ESC "N"
#define  ANSI_SS3  ANSI_ESC "O"
#define  ANSI_DCS  ANSI_ESC "P"
#define  ANSI_CSI  ANSI_ESC "["
#define  ANSI_ST   ANSI_ESC "\\"
#define  ANSI_OSC  ANSI_ESC "]"
#define  ANSI_SOS  ANSI_ESC "X"
#define  ANSI_PM   ANSI_ESC "^"
#define  ANSI_APC  ANSI_ESC "_"

// CSI sequences {{{1

#define  ANSI_CUU(n)    ANSI_CSI # n "A"
#define  ANSI_CUD(n)    ANSI_CSI # n "B"
#define  ANSI_CUF(n)    ANSI_CSI # n "C"
#define  ANSI_CUB(n)    ANSI_CSI # n "D"
#define  ANSI_CNL(n)    ANSI_CSI # n "E"
#define  ANSI_CPL(n)    ANSI_CSI # n "F"
#define  ANSI_CHA(n)    ANSI_CSI # n "G"
#define  ANSI_CUP(n,m)  ANSI_CSI # n ";" # m "H"
#define  ANSI_ED(n)     ANSI_CSI # n "J"
#define  ANSI_EL(n)     ANSI_CSI # n "K"
#define  ANSI_SU(n)     ANSI_CSI # n "S"
#define  ANSI_SD(n)     ANSI_CSI # n "T"
#define  ANSI_HVP(n,m)  ANSI_CSI # n ";" # m "f"
#define  ANSI_SGR(n)    ANSI_CSI # n "m"
#define  ANSI_DSR       ANSI_CSI "6n"

#define  ANSI_SCP  ANSI_CSI "s"
#define  ANSI_RCP  ANSI_CSI "u"
#define  ANSI_SCOSC  ANSI_SCP
#define  ANSI_SCORC  ANSI_RCP

#define  ANSI_DECTCEM_SET    ANSI_CSI "?25h"
#define  ANSI_DECTCEM_RESET  ANSI_CSI "?25l"

// Parameters {{{1
// ED & EL {{{2

#define  ANSI_ERASE_CUR2ENDSCR    ANSI_ED(0)
#define  ANSI_ERASE_CUR2STARTSCR  ANSI_ED(1)
#define  ANSI_ERASE_SCREEN        ANSI_ED(2)
#define  ANSI_ERASE_SAVED_LINES   ANSI_ED(3)
#define  ANSI_ERASE_CUR2EOL       ANSI_EL(0)
#define  ANSI_ERASE_SOL2CUR       ANSI_EL(1)
#define  ANSI_ERASE_LINE          ANSI_EL(2)

// SGR {{{2

#define  ANSI_RESET          ANSI_SGR(0)

#define  ANSI_BOLD           ANSI_SGR(1)

#define  ANSI_ITALIC         ANSI_SGR(3)
#define  ANSI_ITALIC_OFF     ANSI_SGR(23)

#define  ANSI_UNDERLINE      ANSI_SGR(4)
#define  ANSI_UNDERLINE_OFF  ANSI_SGR(24)

#define  ANSI_BLINK_SLOW     ANSI_SGR(5)
#define  ANSI_BLINK_RAPID    ANSI_SGR(6)
#define  ANSI_BLINK_OFF      ANSI_SGR(6)

#define  ANSI_REVERSE        ANSI_SGR(7)
#define  ANSI_REVERSE_OFF    ANSI_SGR(27)
#define  ANSI_INVERSE        ANSI_REVERSE
#define  ANSI_INVERSE_OFF    ANSI_REVERSE_OFF

#define  ANSI_CROSSED        ANSI_SGR(9)
#define  ANSI_CROSSED_OFF    ANSI_SGR(29)

// Colors {{{1
// Foreground {{{2

#define  ANSI_FG_256_TABLE(n)    ANSI_SGR(38;5;n)
#define  ANSI_FG_RGB(r,g,b)      ANSI_SGR(38;2;r;g;b)

#define  ANSI_FG_BLACK           ANSI_SGR(30)
#define  ANSI_FG_RED             ANSI_SGR(31)
#define  ANSI_FG_GREEN           ANSI_SGR(32)
#define  ANSI_FG_YELLOW          ANSI_SGR(33)
#define  ANSI_FG_BLUE            ANSI_SGR(34)
#define  ANSI_FG_MAGENTA         ANSI_SGR(35)
#define  ANSI_FG_CYAN            ANSI_SGR(36)
#define  ANSI_FG_WHITE           ANSI_SGR(37)

#define  ANSI_FG_BRIGHT_BLACK    ANSI_SGR(90)
#define  ANSI_FG_BRIGHT_RED      ANSI_SGR(91)
#define  ANSI_FG_BRIGHT_GREEN    ANSI_SGR(92)
#define  ANSI_FG_BRIGHT_YELLOW   ANSI_SGR(93)
#define  ANSI_FG_BRIGHT_BLUE     ANSI_SGR(94)
#define  ANSI_FG_BRIGHT_MAGENTA  ANSI_SGR(95)
#define  ANSI_FG_BRIGHT_CYAN     ANSI_SGR(96)
#define  ANSI_FG_BRIGHT_WHITE    ANSI_SGR(97)

#define  ANSI_FG_GRAY  ANSI_FG_BRIGHT_BLACK

// Background {{{2

#define  ANSI_BG_256_TABLE(n)    ANSI_SGR(48;5;n)
#define  ANSI_BG_RGB(r,g,b)      ANSI_SGR(48;2;r;g;b)

#define  ANSI_BG_BLACK           ANSI_SGR(40)
#define  ANSI_BG_RED             ANSI_SGR(41)
#define  ANSI_BG_GREEN           ANSI_SGR(42)
#define  ANSI_BG_YELLOW          ANSI_SGR(43)
#define  ANSI_BG_BLUE            ANSI_SGR(44)
#define  ANSI_BG_MAGENTA         ANSI_SGR(45)
#define  ANSI_BG_CYAN            ANSI_SGR(46)
#define  ANSI_BG_WHITE           ANSI_SGR(47)

#define  ANSI_BG_BRIGHT_BLACK    ANSI_SGR(100)
#define  ANSI_BG_BRIGHT_RED      ANSI_SGR(101)
#define  ANSI_BG_BRIGHT_GREEN    ANSI_SGR(102)
#define  ANSI_BG_BRIGHT_YELLOW   ANSI_SGR(103)
#define  ANSI_BG_BRIGHT_BLUE     ANSI_SGR(104)
#define  ANSI_BG_BRIGHT_MAGENTA  ANSI_SGR(105)
#define  ANSI_BG_BRIGHT_CYAN     ANSI_SGR(106)
#define  ANSI_BG_BRIGHT_WHITE    ANSI_SGR(107)

#define  ANSI_BG_GRAY  ANSI_BG_BRIGHT_BLACK

//                                                   (resources) {{{1

// https://en.wikipedia.org/wiki/ANSI_escape_code#Description
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797
// https://notes.burke.libbey.me/ansi-escape-codes

// }}}1

#endif // ANSI_ESC_SEQ_H_

// vim: fdm=marker fmr={{{,}}}
