/*
  Problem Statement :
    Write a program which accept one number from user and toggle contents of first and last nibble of the number. Return modified number. (Nibble is a group of four bits)

      Input : 10
      Output : 4026531845
      Input : 4026531845
      Output : 10
*/

#include <stdio.h>
typedef int bool;
typedef unsigned long ULONG;

#define true 1
#define false 0

ULONG ToggleBit(ULONG iNo)
{
  ULONG iResult = 0L;
  ULONG iMask = 0xf000000f;

  iResult = iNo ^ iMask;

  return iResult;
}

int main()
{
  ULONG iValue1 = 0L, iRet = 0L;

  printf("Enter number :\n");
  scanf("%lu", &iValue1);

  iRet = ToggleBit(iValue1);

  printf("Number %lu after toggle contents of first and last nibble toggle \n", iValue1);
  printf("%lu", iRet);

  return 0;
}