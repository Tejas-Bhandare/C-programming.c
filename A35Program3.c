/*
  Problem Statement :
    Write a program which accept one number from user and check whether 9th or 12th bit is on or off.

    Input : 257
    Output : TRUE
*/

#include <stdio.h>

typedef int bool;
typedef unsigned long ULONG;
#define true 1
#define false 0

bool ChkBitOnOff(ULONG iNo)
{
  ULONG iResult1 = 0L, iResult2 = 0L;
  int iMask1 = 0x100;
  int iMask2 = 0x800;

  iResult1 = iNo & iMask1;
  iResult2 = iNo & iMask2;

  if (iResult1 == iMask1 || iResult2 == iMask2)
  {
    return true;
  }
  else
  {
    return false;
  }
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
    printf("9th or 12th or both bits of number %lu are ON", iValue);
  }
  else
  {
    printf("9th and 12th bits of number %lu are OFF", iValue);
  }

  return 0;
}