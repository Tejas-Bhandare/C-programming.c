/*
  Problem Satement :
    Write a program to find even factorial of given number.

    Input : 10
    Output : 3840 (10 * 8 * 6 * 4 * 2)
*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
  int iCnt = 0, iFact = 1;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      iFact = iFact * iCnt;
    }
  }

  return iFact;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number to calculate even factorial :\n");
  scanf("%d", &iValue);

  iRet = EvenFactorial(iValue);

  printf("Even factorial of %d is : %d", iValue, iRet);

  return 0;
}