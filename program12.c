
#include <stdio.h>
float CircleArea(float fRadius)
{
  float fArea = 0.0f;
  fArea = 3.14 * fRadius * fRadius;
  return fArea;
}

int main()
{
  float fvalue = 0.0f;
  float fResult = 0.0f;

  printf("Enter the radius :\n");
  scanf("%f", fvalue);

  fResult = CircleArea(fvalue);

  printf("Area of the Circle is : %f\n", fResult);

  return 0;
}