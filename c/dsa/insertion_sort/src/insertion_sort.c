#include <stdio.h>

// TODO: functions should alter array in place, rather generate their own
// TODO: refactor to randomize the array
// TODO: impl reverse sorting
// TODO: impl test
// TODO: impl complexity analysis
// TODO: update script to start from certain home location
// TODO: script takes dynamic pos pars: <alg><strategy>
// TODO: document testing process in readme

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

  int tmp = arr[n - 1];
  int j = n - 2;

  while (j >= 0 && arr[j] > tmp) {
    arr[j + 1] = arr[j];
    j--;
  }
  arr[j + 1] = tmp;
}

int main() {
  printf("iterative insertion sort:\n");
  int array_one[10] = {5, 7, 3, 6, 1, 4, 0, 9, 8, 2};
  size_t size_in_bytes_one = sizeof(array_one);
  size_t item_size_one = sizeof(int);
  size_t length_one = size_in_bytes_one / item_size_one;

  for (int i = 0; i < length_one; i++) {
    if (i == length_one - 1) {
      printf("%d\n", array_one[i]);
    } else {
      printf("%d ", array_one[i]);
    }
  }
  iterative_insertion_sort(array_one, length_one);
  for (int i = 0; i < length_one; i++) {
    printf("%d ", array_one[i]);
  }

  printf("\nrecursive insertion sort:\n");
  int array_two[10] = {5, 7, 3, 6, 1, 4, 0, 9, 8, 2};
  size_t size_in_bytes_two = sizeof(array_two);
  size_t item_size_two = sizeof(int);
  size_t length_two = size_in_bytes_two / item_size_two;

  for (int i = 0; i < length_one; i++) {
    if (i == length_two - 1) {
      printf("%d\n", array_two[i]);
    } else {
      printf("%d ", array_two[i]);
    }
  }
  recursive_insertion_sort(array_two, length_two);
  for (int i = 0; i < length_one; i++) {
    printf("%d ", array_two[i]);
  }

  return 0;
}
