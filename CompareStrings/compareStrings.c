#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool compareStrings(const char *str1, const char *str2) {
  u_int index = 0;
  bool reachedEnd = false;
  bool isEquil = true;

  while (!reachedEnd) {

    if (str1[index] != str2[index]) {
      isEquil = false;
    }

    if (str1[index] == 0 || str2[index] == 0) {
      reachedEnd = true;
    }

    index++;
  }

  return  isEquil;
}
