
#include <stdio.h>
#include <stdlib.h>
short parity(unsigned long long x) {
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

