/*
  Problem Statement :
    Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.

*/

#include <stdio.h>

typedef int bool;
typedef unsigned long ULONG;
#define true 1
#define false 0

bool ChkBitOnOff(ULONG iNo)
{
  ULONG iResult;
  int iMask = 0x80000001;

  iResult = iNo & iMask;

  return iResult == iMask;
}
int main()
{
  ULONG iValue = 0L;
  bool bRet = false;

  printf("Enter number :\n");
  scanf("%lu", &iValue);

  bRet = ChkBitOnOff(iValue);

  if (bRet == true)
  {
    printf("1st and 32th bits of number %lu are ON", iValue);
  }
  else
  {
    printf("One of 1st, 32th  or both bits of number %lu are OFF", iValue);
  }

  return 0;
}