#include <stdio.h>
#include <stdlib.h>

// TODO: impl sizeof arr :45

void static_array() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = sizeof(arr) / sizeof(int);

  for (int i = 0; i < size; i++) {
    if (i == size - 1) {
      printf("%d\n", arr[i]);
    } else {
      printf("%d ", arr[i]);
    }
  }
}

void dynamic_array() {
  int *arr;
  int size = 10;

  arr = (int *)malloc(size * sizeof(int));

  for (int i = 0; i < size; i++) {
    int iterator = 0;
    arr[i] = i + iterator;
    printf("%d ", arr[i]);
    iterator++;
  }

  size = 20;
  arr = (int *)realloc(arr, size * sizeof(int));

  printf("\ndynamic array (resize):\n");
  for (int i = 0; i < size; i++) {
    int iterator = 0;
    arr[i] = i + iterator;
    printf("%d ", arr[i]);
    iterator++;
  }

  free(arr);
}

void multidimensional_array() {
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  printf("static array:\n");
  static_array();

  printf("dynamic array:\n");
  dynamic_array();

  printf("\nmultidimensional array:\n");
  multidimensional_array();

  return 0;
}
