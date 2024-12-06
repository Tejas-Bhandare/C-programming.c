/*
  Problem Statement :
    Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

      Input : 127
      Output : 63
*/

#include <stdio.h>

int ToggleBit(int iNo)
{
  int iResult;
  int iMask = 0x40;

  iResult = iNo ^ iMask;

  return iResult;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = ToggleBit(iValue);

  printf("Number after 7th bit toggle : %d\n", iRet);

  return 0;
}