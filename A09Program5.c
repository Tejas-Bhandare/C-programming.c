/*

*/
/*
Problem Statement :
  Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)
*/

#include <stdio.h>

double SqFeetToSqMeter(int iSqFeet)
{
  double iSqMeter = 0.0;
  iSqMeter = iSqFeet * 0.0929;

  return iSqMeter;
}

int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;

  printf("Enter area in square feet :\n");
  scanf("%f", &fValue);

  dRet = SqFeetToSqMeter(fValue);

  printf("%f Square feet area is %lf square meters", fValue, dRet);

  return 0;
}
