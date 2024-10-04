# FMT.H Docs

This is the small afmt.h documentation

## Table of Contents

- [fmt](<#fmt()>)
- [with](#with)
- [Styles](#styles)
- [4-bit colors](#4-bit-colors)
- [8-bit colors](#8-bit-colors)
- [24-bit colors(rgb)](#24-bit-colorsRGB)
## fmt()

### SYNOPSIS

Macro to formaing string literals with a
selected style and colors

### ARGUMENTS

\_format : the formating style
\_text : the string literal to format

### EXAMPLE

```c
#include <stdion.h>
#include "fmt.h"

int main(void){
  char s[] = fmt(ITALIC with bg(RED) with fg_wd(33),"lorem ipsum");
  puts(s);
  return 0;
}
```

## with

### SYNOPSIS

macro for chaining style format options, expands to ";"

### EXAMPLE

```c
#include <stdion.h>
#include "fmt.h"

int main(void){
  char s[] = fmt(ITALIC with bg(RED) with fg_wd(33),"lorem ipsum");
  puts(s);
  return 0;
}
```

## Styles

### SYNOPSIS

there are 5 styles in fmt.h:

- [plain](#PLAIN)
- [bold](#BOLD)
- [dim](#DIM)
- [italic](#ITALIC)
- [underline](#UNDERLINE)
- [reverse](#REVERSE)

### PLAIN

Plain text, no formating

### BOLD

Bold text, increased intensity

### DIM

Faint/Dim text, decreased intensity

### ITALIC

Italic text

### UNDERLINE

Underlines the text

### REVERSE

Reverses the foreground and background colors

## 4-bit colors

## 8-bit colors

## 24-bit-colors(RGB)
