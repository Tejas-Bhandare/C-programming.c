/*
  Problem Statement :
    Write a program which accept one number and position from user and off that bit. Return modified number.

      Input : 10 2
      Output : true
      Input : 73 5
      Output : false
*/

#include <stdio.h>
typedef int bool;
typedef unsigned long ULONG;

#define true 1
#define false 0

ULONG SetBitOff(ULONG iNo, int iPOs)
{
  ULONG iResult = 0L;
  int iMask = 0x1;

  iMask = iMask << (iPOs - 1);
  iMask = ~iMask;

  iResult = iNo & iMask;

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

  iRet = SetBitOff(iValue1, iValue2);

  printf("Number %lu after set Bit of position %d OFF \n", iValue1, iValue2);
  printf("%lu", iRet);

  return 0;
}