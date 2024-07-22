#include <stdio.h>

// TODO: impl all insertion sort concepts

void insertion_sort(int arr[], int len) {
  for (int i = 1; i < len; i++) {
    int tmp = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > tmp) {
      arr[j + 1] = arr[j];
      j--;
    };

    arr[j + 1] = tmp;
  };
}

int main() {
  printf("INSERTION SORT:\n");
  int length = 10;
  int array[10] = {5, 7, 3, 6, 1, 4, 0, 9, 8, 2};

  printf("unsorted array:\n");
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }

  insertion_sort(array, length);

  printf("\nsorted array:\n");
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
