#include <stdio.h>
int test(int success, const char* String) {

  if(success) {
    printf("\n Success! :  %s\n", String);
  } else {
    printf("\n Fail!    :  %s\n", String);
  }

  return success;
}
