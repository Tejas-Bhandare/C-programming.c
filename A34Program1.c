/*
  Problem Statement :
    Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is on return TURE otherwise return FALSE.

      Input : 10 2
      Output : true
      Input : 73 5
      Output : false
*/

#include <stdio.h>
typedef int bool;

#define true 1
#define false 0

bool ChkBit(int iNo, int iPOs)
{
  int iResult;
  int iMask = 0x1;

  iMask = iMask << (iPOs - 1);

  iResult = iNo & iMask;

  return iResult == iMask;
}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  bool bRet = false;

  printf("Enter number :\n");
  scanf("%d", &iValue1);

  printf("Enter position of bit :\n");
  scanf("%d", &iValue2);

  bRet = ChkBit(iValue1, iValue2);

  if (bRet == true)
  {
    printf("Bit of position %d of number %d is ON", iValue2, iValue1);
  }
  else
  {
    printf("Bit of position %d of number %d is OFF", iValue2, iValue1);
  }

  return 0;
}