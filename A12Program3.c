/*
  Problem Statement :

    Write a program which accept number from user and return the count of digits in between 3 and 7.

*/

#include <stdio.h>
#include <stdbool.h>

int CountRange(int iNo)
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

    if (iDigit >= 3 && iDigit <= 7)
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

  iRet = CountRange(iValue);

  printf("%d contains %d digits in range of 3 and 7 in it", iValue, iRet);

  return 0;
}