#include <stdio.h>

// TODO: impl recursive strategy
// TODO: impl test
// TODO: impl complexity analysis

void iterative_insertion_sort(int arr[], int len) {
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

void recursive_insertion_sort(int arr[], int n) {
  if (n <= 1) {
    return;
  }

  recursive_insertion_sort(arr, n - 1);

  int last = arr[n - 1];
  int j = n - 2;

  while (j >= 0 && arr[j] < last) {
    arr[j + 1] = arr[j];
    j--;
  }
  arr[j + 1] = last;
}

int main() {
  printf("ITERATIVE INSERTION SORT:\n");
  int array_one[10] = {5, 7, 3, 6, 1, 4, 0, 9, 8, 2};
  size_t size_in_bytes_one = sizeof(array_one);
  size_t item_size_one = sizeof(array_one[0]);
  size_t length_one = size_in_bytes_one / item_size_one;

  printf("unsorted array:\n");
  for (int i = 0; i < length_one; i++) {
    printf("%d ", array_one[i]);
  }

  iterative_insertion_sort(array_one, length_one);

  printf("\nsorted array:\n");
  for (int i = 0; i < length_one; i++) {
    printf("%d ", array_one[i]);
  }

  printf("\nRECURSIVE INSERTION SORT:\n");
  int array_two[10] = {5, 7, 3, 6, 1, 4, 0, 9, 8, 2};
  size_t size_in_bytes_two = sizeof(array_two);
  size_t item_size_two = sizeof(array_two[0]);
  size_t length_two = size_in_bytes_two / item_size_two;

  printf("unsorted array:\n");
  for (int i = 0; i < length_two; i++) {
    printf("%d ", array_two[i]);
  }

  recursive_insertion_sort(array_two, length_two);

  printf("\nsorted array:\n");
  for (int i = 0; i < length_one; i++) {
    printf("%d ", array_two[i]);
  }
  return 0;
}
