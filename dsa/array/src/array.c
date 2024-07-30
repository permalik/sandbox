#include <stdio.h>
#include <stdlib.h>

// TODO: impl multidimensional array
// TODO: impl array of pointers

void static_array() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int elm_len = sizeof(int);
  int arr_len = sizeof(arr) / elm_len;

  printf("STATIC ARRAY:\n");
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

  printf("\nINIT DYNAMIC ARRAY (10):\n");
  for (int i = 0; i < arr_len; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  arr_len = 20;
  arr = (int *)realloc(arr, arr_len * sizeof(int));

  printf("\nRESIZE DYNAMIC ARRAY (20):\n");
  for (int i = 0; i < arr_len; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  free(arr);
}

int main() {
  static_array();
  dynamic_array();
  return 0;
}
