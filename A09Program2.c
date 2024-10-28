/*

*/
/*
Problem Statement :
  Write a program which accept width & height of rectangle from user and calculate its area. (Area = Width * Breadth)
*/

#include <stdio.h>

double RectArea(float fLength, float fWidth)
{
  double dArea = 0.0;

  if (fLength < 0.0f)
  {
    fLength = -fLength;
  }
  if (fWidth < 0.0f)
  {
    fWidth = -fWidth;
  }

  dArea = fLength * fWidth;

  return dArea;
}

int main()
{
  float fValue1 = 0.0f, fValue2 = 0.0f;
  double dRet = 0.0;

  printf("Enter length of rectangle :\n");
  scanf("%f", &fValue1);

  printf("Enter width of rectangle :\n");
  scanf("%f", &fValue2);

  dRet = RectArea(fValue1, fValue2);

  printf("Area of rectangle with length : %f and breadth : %f is %lf", fValue1, fValue2, dRet);

  return 0;
}
