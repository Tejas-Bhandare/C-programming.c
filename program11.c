

#include <stdio.h>

int main()
{
  float fRadius = 0.0f;
  float fArea = 0.0f;

  printf("Enter the radius :");
  scanf("%f", fRadius);

  fArea = 3.14 * fRadius * fRadius;

  printf("Area of the Circle is : %f\n", fArea);

  return 0;
}