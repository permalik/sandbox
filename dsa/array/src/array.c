#include <stdio.h>
#include <stdlib.h>

// TODO: impl sizeof arr :45

void static_array() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int elm_len = sizeof(int);
  int arr_len = sizeof(arr) / elm_len;

  for (int i = 0; i < arr_len; i++) {
    if (i == arr_len - 1) {
      printf("%d\n", arr[i]);
    } else {
      printf("%d ", arr[i]);
    }
  }
}

void dynamic_array() {
  int *arr;
  int arr_len = 10;

  arr = (int *)malloc(arr_len * sizeof(int));

  for (int i = 0; i < arr_len; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  arr_len = 20;
  arr = (int *)realloc(arr, arr_len * sizeof(int));

  printf("\ndynamic array (resize):\n");
  for (int i = 0; i < arr_len; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
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
