/*

*/
/*
Problem Statement :
  Write a program which accept temperature in Fahrenheit and convert it into celsius. (1 celsius = (Fahrenheit -32) * (5/9))
*/

#include <stdio.h>

double FhToCelcius(float fTemp)
{
  double dCelcius = 0.0;

  dCelcius = (double)(fTemp - 32) * ((double)5 / 9);

  return dCelcius;
}

int main()
{
  float fValue = 0.0f;
  double dRet = 0.0;

  printf("Enter temperature in Fahrenheit :\n");
  scanf("%f", &fValue);

  dRet = FhToCelcius(fValue);

  printf("%f Fahrenheit in celcius is %lf", fValue, dRet);

  return 0;
}
