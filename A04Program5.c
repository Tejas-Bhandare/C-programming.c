/*
  Write a program which accept number from user and return differnce between summation of all its factors and non factors.
*/
#include <stdio.h>

int FactDifference(int iNo)
{
  int iCnt = 0;
  int iFactSum = 0;
  int iNonFactSum = 0;

  for (iCnt = 1; iCnt < iNo; iCnt++)
  {
    if (iNo % iCnt == 0)
    {
      iFactSum = iFactSum + iCnt;
    }
    else
    {
      iNonFactSum = iNonFactSum + iCnt;
    }
  }

  return iFactSum - iNonFactSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = FactDifference(iValue);
  printf("Difference between summation of all factors and  non factors of %d is %d", iValue, iRet);

  return 0;
}