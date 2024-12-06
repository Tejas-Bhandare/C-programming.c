/*
  Problem Statement :
    Write a program which accept one number , two positions from user and check whether bit at first or bit at second position is ON or OFF.

    Input : 10 3 7
    Output : TRUE
*/

#include <stdio.h>

typedef int bool;
typedef unsigned long ULONG;
#define true 1
#define false 0

bool ChkBitOnOff(ULONG iNo, int iPos1, int iPos2)
{
  ULONG iResult1 = 0L, iResult2 = 0L;
  int iMask1 = 0x1;
  int iMask2 = 0x1;

  iMask1 = iMask1 << (iPos1 - 1);
  iMask2 = iMask2 << (iPos2 - 1);

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
  ULONG iValue1 = 0L;
  int iValue2 = 0, iValue3 = 0;
  bool bRet = false;

  printf("Enter number :\n");
  scanf("%lu", &iValue1);

  printf("Enter first position of bit :\n");
  scanf("%d", &iValue2);

  printf("Enter second position of bit :\n");
  scanf("%d", &iValue3);

  bRet = ChkBitOnOff(iValue1, iValue2, iValue3);

  if (bRet == true)
  {
    printf("bits at position %d or %d or both of number %lu are ON", iValue2, iValue3, iValue1);
  }
  else
  {
    printf("bits at position %d and %d of number %lu are OFF", iValue2, iValue3, iValue1);
  }

  return 0;
}