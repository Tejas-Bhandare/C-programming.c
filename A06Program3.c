/*

*/
/*
Problem Statement :
 Write a program to find factorial of given number.
*/

#include <stdio.h>

int Factorial(int iNo)
{
  int iCnt = 0;
  int iFactorial = 1;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    iFactorial = iFactorial * iCnt;
  }
  return iFactorial;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = Factorial(iValue);

  printf("Factorial of number %d is %d", iValue, iRet);

  return 0;
}
