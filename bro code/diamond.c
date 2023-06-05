
#include <stdio.h>

int main() {
  int i, j, k;

  // Loop to print the upper half of the diamond
  for (i = 0; i < 5; i++) {
    // Print the spaces
    for (j = 0; j < 5 - i; j++) {
      printf(" ");
    }
    // Print the asterisks
    for (k = 0; k <= i; k++) {
      printf("* ");
    }
    printf("\n");
  }

  // Loop to print the lower half of the diamond
  for (i = 4; i >= 0; i--) {
    // Print the spaces
    for (j = 0; j < 5 - i; j++) {
      printf(" ");
    }
    // Print the asterisks
    for (k = 0; k <= i; k++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
