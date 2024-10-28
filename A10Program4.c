/*
  Problem Statement :

    Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only).
*/

#include <stdio.h>
int RangeSumEven(int iStart, int iEnd)
{
  int iCnt = 0;
  int iSum = 0;

  if (iStart > iEnd || iStart < 0)
  {
    printf("Enter valid range : start point < end point, must have non negative values");
  }

  for (iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      iSum = iSum + iCnt;
    }
  }

  return iSum;
}

int main()
{
  int iValue1 = 0, iValue2 = 0, iRet = 0;

  printf("Enter starting point :\n");
  scanf("%d", &iValue1);

  printf("Enter end point :\n");
  scanf("%d", &iValue2);

  iRet = RangeSumEven(iValue1, iValue2);

  printf("Addition of even numbers between %d and %d is %d", iValue1, iValue2, iRet);

  return 0;
}