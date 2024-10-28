/*
  Problem Statement :

    Write a program which accept number from user and return multiplication of all digits.

*/

#include <stdio.h>
#include <stdbool.h>

int MultDigit(int iNo)
{
  int iDigit = 0;
  int iProduct = 1;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo > 0)
  {
    iDigit = iNo % 10;
    iProduct = iProduct * iDigit;
    iNo = iNo / 10;
  }

  return iProduct;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = MultDigit(iValue);

  printf("Multiplication of digits of %d is %d", iValue, iRet);

  return 0;
}