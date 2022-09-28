#include "./compareStrings.c"
#include <stdio.h>
#include "../testFunction.c"


int main(int argc, char *argv[]) {

  int success;

  success += test(compareStrings("Equil", "Equil") == 1, "Strings are equil");
  success += test(compareStrings("Equia", "Equil") == 0, "Strings are equil length but not equil");
  success += test(compareStrings("Equa", "Equil") == 0, "Strings are not equil length");
  success += test(compareStrings("Equi", "Equil") == 0, "Strings are not equil length but are substring");

  return success;
}
