/*
  Problem Statement :

    Write a program which accept number from user and count frequency of such a digits which are less than 6.

*/

#include <stdio.h>
#include <stdbool.h>

int CountLessTSix(int iNo)
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

    if (iDigit < 6)
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

  iRet = CountLessTSix(iValue);

  printf("%d contains %d digit less than 6 in it", iValue, iRet);

  return 0;
}