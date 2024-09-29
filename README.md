# AFMT.H

ASCII Fomart or afmt.h is super simple text formating macro-based
library using ASCII escapes.

## How to Use

1. download the afmt.h header and copy it to your project directory
2. include fmt.h in your c/c++ code
3. read the [documentation](AFMT.md) \(AFMT.md\) and enjoy!

## Features

### 4, 8 and 24 bit colors suport

```c
#include <stdio.h>
#include "afmt.h"

int main(void){

  printf(fmt(fg(RED) with bg(WHITE), "I'm a text"));
  printf(fmt(fg_wd(196) with bg_wd(255), "I'm other text"));
  printf(fmt(fg_rgb(255,0,0) with bg_rgb(255,255,255), "I'm another text"));
  return 0;
}

```

### ASCII styles

```c
#include <stdio.h>
#include "afmt.h"

int main(void){

  printf(fmt(PLAIN, "I'm a plain text"));
  printf(fmt(ITALIC, "I'm an italic text"));
  printf(fmt(BOLD, "I'm a bold text"));
  return 0;
}

```
