
#include <stdio.h>

enum colors {RED, WHITE, BLUE};

struct Array {
  int* array;
  int size;
};

void PrintArray(int* Ary, int size) {
  int index = 0;
  while(size) {
    printf("%d", Ary[index]);
    size--;
    index++;
  }
}

void swap(int* Ary, int index1, int index2) {
  int tempStore = Ary[index1];
  Ary[index1] = Ary[index2];
  Ary[index2] = tempStore;
}
void flagSort(int pivot_index, struct Array* Array ){
  int* A_ptr = Array->array;
  int pivot = A_ptr[pivot_index];
  
  int smaller = 0, equal = 0, larger = Array->size;

  while(equal < larger ) {
    if (A_ptr[equal] < pivot ) {
      swap(A_ptr, smaller++, equal++ );
    } else if ( A_ptr[equal] == pivot) {
      ++equal;
    } else { // A_ptr[equal] > pivot
      swap(A_ptr, equal, --larger);
    }
  }
  return;
}

int main (int argc, char *argv[])
{

  int c[6] = {RED, BLUE, RED, WHITE, WHITE, BLUE};
  struct Array colors = { c, sizeof c / sizeof c[0]};
  printf("\n\n");
  PrintArray(colors.array, colors.size);
  printf("\n\n");
  flagSort(3, &colors);

  printf("\n\n");
  PrintArray(colors.array, colors.size);
  printf("\n\n");
  
  return 0;
}
