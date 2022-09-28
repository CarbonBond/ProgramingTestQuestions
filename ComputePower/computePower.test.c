#include <stdio.h>
#include <stdlib.h>
#include "./computePower.c"
#include "../testFunction.c"

int main(int argc, char *argv[]) {
  int success = 0;

  success += test( Power(2, 2) == 4, "Basic 2^2=4");
  success += test( Power(3, 2) == 9, "Basic 3^3=9");
  success += test( Power(2.5, 3) == 15.625, "Float 2.5^3");
  success += test( Power(5, 0) == 1, "zeroth power = 1");
  success += test( Power(5, 1) == 5, "Single power is base");
  return 0;
}
