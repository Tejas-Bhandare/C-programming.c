/*

*/
/*
Problem Statement :
  Write a program which accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)
*/

#include <stdio.h>

double CircleArea(float fRadius)
{
  float fPI = 3.14f;
  double dArea = 0.0;

  if (fRadius < 0.0f)
  {
    fRadius = -fRadius;
  }
  dArea = fPI * fRadius * fRadius;

  return dArea;
}

int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;

  printf("Enter number :\n");
  scanf("%f", &fValue);

  dRet = CircleArea(fValue);

  printf("Area of circle with radius %lf is %lf", fValue, dRet);

  return 0;
}
