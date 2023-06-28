#include <stdio.h>

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);

  switch (number % 2) {
  case 0:
    printf("The number is even.\n");
    break;
  case 1:
    printf("The number is odd.\n");
    break;
  default:
    printf("Invalid number.\n");
  }

  return 0;
}
