/*
 * A small ASCII formating header only library
 *
 * */

#ifndef _AFMT_H
#define _AFMT_H

// ASCII Scapes

#define _ANSI_ESC "\x1b"
#define _ANSI_RESET "\x1b[0m"

#define ANSI_BELL "\x07"
#define ANSI_BCKSPC "\x08"
#define ANSI_TAB "\x09"
#define ANSI_LINE_FEED "\x0a"
#define ANSI_FORM_FEED "\x0c"
#define ANSI_CR "\x0d"
// fmt macro

#define fmt(_format, _text) _ANSI_ESC "[" _format "m" _text _ANSI_RESET
#define with ";"

// style

#define PLAIN ""
#define BOLD "1"
#define DIM "2"
#define ITALIC "3"
#define UNDERLINE "4"
#define REVERSE "7"

// 4-bit colors

#define BLACK "0"
#define RED "1"
#define GREEN "2"
#define YELLOW "3"
#define BLUE "4"
#define MAGENTA "5"
#define CYAN "6"
#define WHITE "7"

// foreground and background coloring

// 4-bit foreground (text)
#define fg(_color_4bit) "3" _color_4bit
// 4-bit background
#define bg(_color_4bit) "4" _color_4bit
// 4-bit bright foreground (text)
#define fg_br(_color_4bit) "9" _color_4bit
// 4-bit bright backgorund
#define bg_br(_color_4bit) "10" _color_4bit

// 8-bit color foreground (text)
#define fg_wd(_color_8bit) "38;5;" #_color_8bit
// 8-bit color background
#define bg_wd(_color_8bit) "48;5;" #_color_8bit

// 24-bit color foreground (text)
#define fg_rgb(r, g, b) "38;2;" #r ";" #g ";" #b
// 24-bit color background
#define bg_rgb(r, g, b) "48;2;" #r ";" #g ";" #b

#endif /* _FMT_H */
