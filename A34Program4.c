/*
  Problem Statement :
    Write a program which accept one number and position from user and toggle that bit. Return modified number.

      Input : 10 3
      Output : 14
      Input : 14 3
      Output : 10
*/

#include <stdio.h>
typedef int bool;
typedef unsigned long ULONG;

#define true 1
#define false 0

ULONG ToggleBit(ULONG iNo, int iPOs)
{
  ULONG iResult = 0L;
  int iMask = 0x1;

  iMask = iMask << (iPOs - 1);

  iResult = iNo ^ iMask;

  return iResult;
}

int main()
{
  ULONG iValue1 = 0L, iRet = 0L;
  int iValue2 = 0;

  printf("Enter number :\n");
  scanf("%lu", &iValue1);

  printf("Enter position of bit :\n");
  scanf("%d", &iValue2);

  iRet = ToggleBit(iValue1, iValue2);

  printf("Number %lu after set Bit of position %d toggle \n", iValue1, iValue2);
  printf("%lu", iRet);

  return 0;
}