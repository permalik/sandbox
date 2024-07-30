#include <stdio.h>

// TODO: impl array concepts

void static_array() {
  int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int elm_len = sizeof(arr[0]);
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

int main() {
  static_array();
  return 0;
}
