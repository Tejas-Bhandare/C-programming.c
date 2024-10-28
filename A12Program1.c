/*
  Problem Statement :

    Write a program which accept number from user and return the count of even digits.

*/

#include <stdio.h>
#include <stdbool.h>

int CountEvenDigits(int iNo)
{
  int iDigit = 0;
  int iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo > 0)
  {
    iDigit = iNo % 10;

    if (iDigit % 2 == 0)
    {
      iCnt++;
    }

    iNo = iNo / 10;
  }

  return iCnt;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = CountEvenDigits(iValue);

  printf("%d contains %d even digit in it", iValue, iRet);

  return 0;
}