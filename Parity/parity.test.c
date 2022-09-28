#include "./parity.c"
#include "../testFunction.c"

int main(int argc, char *argv[]) {
  int success = 0;

  success += test(parity(0b1001) == 0, "Equil 1s");
  success += test(parity(0b1101) == 1, "Odd 1s");
  success += test(parity(17) == 0, "Even 1s in dec");
  success += test(parity(19) == 1, "Odd 1s in dec");
  success += test(parity(0b1111111111111111111111111111111111111111111111111111111111111111) == 0, "64 1s");

  return 0;
}

