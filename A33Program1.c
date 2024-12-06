/*
  Problem Statement :
    Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

    Input : 192
    Output : 128
*/

#include <stdio.h>

int SetBitOff(int iNo)
{
  int iResult;
  int iMask = 0x40;

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

  printf("Number after setting 7th bit OFF : %d\n", iRet);

  return 0;
}