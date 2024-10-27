/*

*/
/*
Problem Statement :
  Write a program which accept amount in US dollar and return its corresponding value in Indian currency.
  Consider 1$ as 70 rupees.
*/

#include <stdio.h>

int DollerToINR(int iDoller)
{
  int iCnt = 0;
  int iINR = 0;

  iINR = iDoller * 70;

  return iINR;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = DollerToINR(iValue);

  printf("Value of %d $ in INR is %d \n", iValue, iRet);

  return 0;
}
