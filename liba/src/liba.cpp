#include "liba.h"
#include <fmt/format.h>
#include <iostream>

void liba() {
#ifdef NDEBUG
  fmt::print("liba/0.0.1: Hello World Release!\n");
#else
  fmt::print("liba/0.0.1: Hello World Debug!\n");
#endif
}
