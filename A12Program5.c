/*
  Problem Statement :

    Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

*/

#include <stdio.h>

int CountDiff(int iNo)
{
  int iDigit = 0, iEvenSum = 0, iOddSum = 0, iDiff = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo > 0)
  {
    iDigit = iNo % 10;

    if (iDigit % 2 == 0)
    {
      iEvenSum = iEvenSum + iDigit;
    }
    else
    {
      iOddSum = iOddSum + iDigit;
    }

    iNo = iNo / 10;
  }

  iDiff = iEvenSum - iOddSum;

  return iDiff;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = CountDiff(iValue);

  printf("Difference between even digit summation and odd digit summation is of %d is %d", iValue, iRet);

  return 0;
}