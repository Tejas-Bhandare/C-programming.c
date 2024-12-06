/*
  Problem Statement :
    Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.

      Input : 577
      Output : 1
      Input : 1
      Output :577
*/

#include <stdio.h>

int ToggleBit(int iNo)
{
  int iResult;
  int iMask = 0x240;

  iResult = iNo ^ iMask;

  return iResult;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = ToggleBit(iValue);

  printf("Number after 7th and 10th bit toggle: %d\n", iRet);

  return 0;
}