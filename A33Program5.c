/*
  Problem Statement :
    Write a program which accept one number from user and on its first 4 bits. Return modified number.

      Input : 0
      Output : 15
      Input : 73
      Output : 79
*/

#include <stdio.h>

int SetBitOn(int iNo)
{
  int iResult;
  int iMask = 0xf;

  iResult = iNo | iMask;

  return iResult;
}
int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = SetBitOn(iValue);

  printf("Number after setting first 4 bits ON : %d\n", iRet);

  return 0;
}