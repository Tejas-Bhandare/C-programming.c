/*
  Problem Statement :

    Write a program which accept number from user and count frequency of 2 in it.

*/

#include <stdio.h>
#include <stdbool.h>

int CountTwo(int iNo)
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

    if (iDigit == 2)
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

  iRet = CountTwo(iValue);

  printf("%d contains %d 2s in it", iValue, iRet);

  return 0;
}