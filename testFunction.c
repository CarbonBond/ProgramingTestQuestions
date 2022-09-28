#include <stdio.h>

int test(int success, const char* String) {

  if(success) {
    printf("\033[0;32m");
    printf("\n Success! :  %s\n", String);
    printf("\033[0m");
  } else {
    printf("\033[0;31m");
    printf("\n Fail!    :  %s\n", String);
    printf("\033[0m");
  }

  return success;
}
