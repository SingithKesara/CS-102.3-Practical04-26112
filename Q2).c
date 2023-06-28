#include <stdio.h>

int main() {
  int first_number, second_number, operator;


  printf("Select an operation: \n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Exit\n");


  scanf("%d", &operator);


  switch (operator) {
  case 1:

    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);
    printf("The sum is %d\n", first_number + second_number);
    break;
  case 2:

    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);
    printf("The difference is %d\n", first_number - second_number);
    break;
  case 3:

    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);
    printf("The product is %d\n", first_number * second_number);
    break;
  case 4:

    printf("Enter two numbers: ");
    scanf("%d %d", &first_number, &second_number);
    printf("The quotient is %d\n", first_number / second_number);
    break;
  case 5:

    printf("Exiting...\n");
    break;
  default:

    printf("Invalid operator.\n");
  }

  return 0;
}
