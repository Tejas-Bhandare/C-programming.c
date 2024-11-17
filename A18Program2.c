/*
  Problem Satement :
    Accept amount in US dollar and return its corresponding value in Indian currency.Consider 1$ as 70 rupees.

    Input : 3
    Output : 270
*/

#include <stdio.h>

int DollarToINR(int iNo)
{
  int iCnt = 0, iINR = 0;

  iINR = iNo * 70;

  return iINR;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter value in Dollars :\n");
  scanf("%d", &iValue);

  iRet = DollarToINR(iValue);

  printf("%d Dollar in INR is equal to %d", iValue, iRet);

  return 0;
}