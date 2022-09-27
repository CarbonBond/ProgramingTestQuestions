#include <bitset>
#include <cstdio>
#include <cstdlib>

short Parity(unsigned long long x) {
  // when you XOR the left half of bits with the right half of bits, you get a
  // result with the same parity.
  x ^= x >> 32;
  x ^= x >> 16;
  x ^= x >> 8;
  x ^= x >> 4;
  x ^= x >> 2;
  x ^= x >> 1;

  return x & 0x1;
}

int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("\n Missing argument 1: NUMBER \n ");
    return 1;
  }
  unsigned long long num = strtoull(argv[1], NULL, 2);

  printf("\n The parity of %s is %u.\n", argv[1], Parity(num));
  return 0;
}
