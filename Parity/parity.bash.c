#include <stdio.h>
#include <stdlib.h>
#include "./parity.c"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("\n Missing argument 1: NUMBER \n ");
    return 1;
  }
  unsigned long long num = strtoull(argv[1], NULL, 2);

  printf("\n The Pauity of %s is %u.\n", argv[1], parity(num));
  return 0;
}
