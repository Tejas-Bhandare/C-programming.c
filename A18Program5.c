/*
  Problem Satement :
    Write a program to find even factorial of given number.

    Input : 10
    Output : 945 (9 * 7 * 5 * 3 * 1)
*/

#include <stdio.h>

int FactorialDiff(int iNo)
{
  int iCnt = 0, iFactDiff = 0, iOddFact = 1, iEvenFact = 1;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 != 0)
    {
      iOddFact = iOddFact * iCnt;
    }
    if (iCnt % 2 == 0)
    {
      iEvenFact = iEvenFact * iCnt;
    }
  }

  iFactDiff = iEvenFact - iOddFact;

  return iFactDiff;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number to calculate factorial difference :\n");
  scanf("%d", &iValue);

  iRet = FactorialDiff(iValue);

  printf("Difference in Even and odd factorial of %d is : %d", iValue, iRet);

  return 0;
}