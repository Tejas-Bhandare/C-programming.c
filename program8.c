#include <stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Descriptio  : It is used to perform addition of two Float values.
//  Input : Float, Float
//  Output : Float
//  Author : Tejas Arun Bhandare
//  Date : 06/10/2024
//
/////////////////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
  float fAdd = 0.0f;
  fAdd = fValue1 + fValue2;
  return fAdd;
}


/////////////////////////////////////////////////////////////////////////
//
// This Application is used to perform addition  of two numbers
//
///////////////////////////////////////////////////////////////////////// 
int main()
{
  float fNum1 = 0.0f, fNum2 = 0.0f, fSum = 0.0f;

  printf("Enter first number : \n");
  scanf("%f", &fNum1);

  printf("Enter second number : \n");
  scanf("%f", &fNum2);

  fSum = Addition(fNum1, fNum2);

  printf("Addition of %f and %f is : %f\n", fNum1, fNum2, fSum);

  return 0;
}