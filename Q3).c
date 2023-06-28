#include <stdio.h>

int main() {
  int radius;
  float pi = 3.14;

  printf("Select an operation: \n");
  printf("1. Calculate the circumference of a circle\n");
  printf("2. Calculate the area of a circle\n");
  printf("3. Calculate the volume of a sphere\n");
  printf("4. Exit\n");


  scanf("%d", &radius);

  switch (radius) {
  case 1:

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The circumference of the circle is %f\n", 2 * pi * radius);
    break;
  case 2:

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    printf("The area of the circle is %f\n", pi * radius * radius);
    break;
  case 3:

    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    printf("The volume of the sphere is %f\n", (4 / 3) * pi * radius * radius * radius);
    break;
  case 4:

    printf("Exiting...\n");
    break;
  default:

    printf("Invalid choice.\n");
  }

  return 0;
}
