#include <iostream>
#include <stdlib.h>
#include "app.h"

std::string gradle_c::Greeter::greeting() {
  return std::string("Hello, World!");
}

int main () {
  gradle_c::Greeter greeter;
  std::cout << greeter.greeting() << std::endl;
  return 0;
}
