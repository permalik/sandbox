#include <stdio.h>

// TODO: impl array concepts

int array() {
  int arr[10] = {8, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  printf("STATIC ARRAY:\n");
  for (int i = 0; i <= sizeof(arr); i++) {
    if (i >= sizeof(arr)) {
      printf("%d\n", arr[i]);
    } else {
      printf("%d", arr[i]);
    }
  }
  return 0;
}
