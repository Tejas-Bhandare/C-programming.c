/*

*/
/*
Problem Statement :
  Write a program which returns difference between Even factorial and odd factorial
of given number.
*/

#include <stdio.h>

int FactorialDiff(int iNo)
{
  int iCnt = 0, iFactDiff;
  int iEvenFactorial = 1;
  int iOddFactorial = 1;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      iEvenFactorial = iEvenFactorial * iCnt;
    }
    else
    {
      iOddFactorial = iOddFactorial * iCnt;
    }
  }
  iFactDiff = iEvenFactorial - iOddFactorial;

  return iFactDiff;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = FactorialDiff(iValue);

  printf("Factorial difference is %d", iRet);

  return 0;
}
