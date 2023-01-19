#ifndef ANSI_ESC_SEQ_H_
#define ANSI_ESC_SEQ_H_

// Refer to: http://ascii-table.com/ansi-escape-sequences.php

#define ANSI_TERM_ESC  "\033"
#define ANSI_ESC_SEQ(code, ...) TERM_ESC "[" #code #__VA_ARGS__

// Graphics Mode {{{

#define  ANSI_RESET  ESC_SEQ(0, m)

#define  ANSI_FG_RGB_SEQ(r,g,b) ESC_SEQ(38;2;r;g;b, m)
#define  ANSI_BG_RGB_SEQ(r,g,b) ESC_SEQ(48;2;r;g;b, m)

// Text attributes {{{1

#define  ANSI_BOLD           ESC_SEQ(1,  m)

#define  ANSI_ITALIC         ESC_SEQ(3,  m)
#define  ANSI_ITALIC_OFF     ESC_SEQ(23, m)

#define  ANSI_UNDERLINE      ESC_SEQ(4,  m)
#define  ANSI_UNDERLINE_OFF  ESC_SEQ(24, m)

#define  ANSI_BLINK_SLOW     ESC_SEQ(5,  m)
#define  ANSI_BLINK_RAPID    ESC_SEQ(6,  m)
#define  ANSI_BLINK_OFF      ESC_SEQ(6,  m)

#define  ANSI_INVERSE        ESC_SEQ(7,  m)
#define  ANSI_INVERSE_OFF    ESC_SEQ(27, m)

#define  ANSI_CROSSED        ESC_SEQ(9, m)
#define  ANSI_CROSSED_OFF    ESC_SEQ(29, m)

// Text foreground colors {{{1

#define  ANSI_BLACK          ESC_SEQ(30, m)
#define  ANSI_RED            ESC_SEQ(31, m)
#define  ANSI_GREEN          ESC_SEQ(32, m)
#define  ANSI_YELLOW         ESC_SEQ(33, m)
#define  ANSI_BLUE           ESC_SEQ(34, m)
#define  ANSI_MAGENTA        ESC_SEQ(35, m)
#define  ANSI_CYAN           ESC_SEQ(36, m)
#define  ANSI_GREY           ESC_SEQ(90, m)
#define  ANSI_WHITE          ESC_SEQ(97, m)

#define  ANSI_LIGHT_GREY     ESC_SEQ(37, m)
#define  ANSI_LIGHT_RED      ESC_SEQ(91, m)
#define  ANSI_LIGHT_GREEN    ESC_SEQ(92, m)
#define  ANSI_LIGHT_YELLOW   ESC_SEQ(93, m)
#define  ANSI_LIGHT_BLUE     ESC_SEQ(94, m)
#define  ANSI_LIGHT_MAGENTA  ESC_SEQ(95, m)
#define  ANSI_LIGHT_CYAN     ESC_SEQ(96, m)

// Text background colors {{{1

#define  ANSI_BG_BLACK          ESC_SEQ(40, m)
#define  ANSI_BG_RED            ESC_SEQ(41, m)
#define  ANSI_BG_GREEN          ESC_SEQ(42, m)
#define  ANSI_BG_YELLOW         ESC_SEQ(43, m)
#define  ANSI_BG_BLUE           ESC_SEQ(44, m)
#define  ANSI_BG_MAGENTA        ESC_SEQ(45, m)
#define  ANSI_BG_CYAN           ESC_SEQ(46, m)
#define  ANSI_BG_GREY           ESC_SEQ(100, m)
#define  ANSI_BG_WHITE          ESC_SEQ(107, m)

#define  ANSI_BG_LIGHT_GREY     ESC_SEQ(47, m)
#define  ANSI_BG_LIGHT_RED      ESC_SEQ(101, m)
#define  ANSI_BG_LIGHT_GREEN    ESC_SEQ(102, m)
#define  ANSI_BG_LIGHT_YELLOW   ESC_SEQ(103, m)
#define  ANSI_BG_LIGHT_BLUE     ESC_SEQ(104, m)
#define  ANSI_BG_LIGHT_MAGENTA  ESC_SEQ(105, m)
#define  ANSI_BG_LIGHT_CYAN     ESC_SEQ(106, m)

// Graphics Mode }}}

#endif // ANSI_ESC_SEQ_H_
