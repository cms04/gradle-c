#include <stdio.h>
#include <stdlib.h>
#include "app.h"
#include "util.h"

int main() {
  printf("%s\n", the_greeting());
  printf("%d\n", the_number());
  return EXIT_SUCCESS;
}

char *the_greeting() {
  return "Hello World!";
}
