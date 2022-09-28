#include "./compareStrings.c"


int main(int argc, char *argv[]) {

  if (argc < 3) {
    printf("\n Missing String argument \n\n");
    return 1;
  }

  printf("\n Are strings equil: %d \n\n", compareStrings(argv[1], argv[2]));

  return 0;
}
