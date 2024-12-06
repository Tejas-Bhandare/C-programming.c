/*
  Problem Statement :
    Write a program which accept one number from user and off 7th and 10th bit of that number. Return modified number.

      Input : 576
      Output : 0
      Input : 577
      Output : 1
*/

#include <stdio.h>

int SetBitOff(int iNo)
{
  int iResult;
  int iMask = 0x240;

  iMask = ~iMask;

  iResult = iNo & iMask;

  return iResult;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = SetBitOff(iValue);

  printf("Number after setting 7th and 10 bit OFF : %d\n", iRet);

  return 0;
}