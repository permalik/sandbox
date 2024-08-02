#include <stdio.h>
#include <stdlib.h>

void static_array() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int elm_len = sizeof(int);
  int arr_len = sizeof(arr) / elm_len;

  printf("static array:\n");
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

  printf("init dynamic array (10):\n");
  for (int i = 0; i < arr_len; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  arr_len = 20;
  arr = (int *)realloc(arr, arr_len * sizeof(int));

  printf("\nresize dynamic array (20):\n");
  for (int i = 0; i < arr_len; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  free(arr);
}

void multidimensional_array() {
  int arr[2][3][2] = {{{1, 2}, {3, 4}, {5, 6}}, {{7, 8}, {9, 10}, {11, 12}}};

  printf("\nmultidimensional array:\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 2; k++) {
        printf("%d ", arr[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
}

void pointer_array() {
  int size = 3;
  int *arr[5];

  for (int i = 0; i < size; i++) {
    arr[i] = (int *)malloc(size * sizeof(int));
    for (int j = 0; j < size; j++) {
      arr[i][j] = i * size + j + 1;
    }
  }

  printf("pointer array:\n");
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      printf("%d", arr[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < size; i++) {
    free(arr[i]);
  }
}

int main() {
  static_array();
  dynamic_array();
  multidimensional_array();
  pointer_array();
  return 0;
}
