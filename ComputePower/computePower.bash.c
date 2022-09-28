#include <stdio.h>
#include <stdlib.h>

double Power(double x, int y) {
  double result = 1.0;
  long long power = y;
  if (y < 0)
    power = -power, x = 1.0 / x;
  while (power) {
    if (power & 1) {
      result *= x;
    }
    x *= x, power >>= 1;
  }
  return result;
}

int main(int argc, char *argv[]) {

  if (argc < 2) {
    printf("\n Missing Base and Exponent values \n\n");
    return 1;
  }

  if (argv[1]){
  }

  if (argc < 3) {
    printf("\n Missing Exponent Value \n\n");
    return 1;
  }

  printf("\n Result: %f \n\n", Power(strtof(argv[1], NULL), strtod(argv[2], NULL)));
  return 0;
}
