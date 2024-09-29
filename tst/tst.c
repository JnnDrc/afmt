#include "../afmt.h"
#include <stdio.h>

// ASCII Format test

int main(void) {

  char s[] = fmt(REVERSE , "lorem ipsum");
  puts(s);
  /* puts(fmt(ITALIC with fg(BLUE) with bg(WHITE), "Hello, World!")); */
  /* puts(fmt(DIM with bg_br(RED) with fg(YELLOW), "Hallo, Welt!")); */
  /* puts(fmt(BOLD with fg_wd(198) with bg_wd(233), "Salut, Monde!")); */
  /* puts(fmt(ITALIC with fg_rgb(200, 0, 137) with bg_rgb(255, 185, 0), */
  /* "Ola, Mundo!")); */

  return 0;
}
