/*

*/
/*
Problem Statement :
  Write a program to find odd factorial of given number.
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
  int iCnt = 0;
  int iFactorial = 1;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 != 0)
    {
      iFactorial = iFactorial * iCnt;
    }
  }
  return iFactorial;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = OddFactorial(iValue);

  printf("Odd Factorial of number %d is %d", iValue, iRet);

  return 0;
}
