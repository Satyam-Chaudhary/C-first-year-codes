#include <stdio.h>

int main() {
  int initial_array[10] = {58, 24, 13, 15, 63, 9, 8, 81, 1, 78};

  int first_array[5], second_array[5];

  for (int i = 0; i < 10; i++) {
    if (i < 5) {
      first_array[i] = initial_array[i];
    } else {
      second_array[i-5] = initial_array[i];
    }
  }

  printf("First array: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", first_array[i]);
  }
  printf("\n");

  printf("Second array: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", second_array[i]);
  }
  printf("\n");

  return 0;
}
