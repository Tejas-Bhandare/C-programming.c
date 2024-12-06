/*
  Problem Statement :
    Write a program which check whether 15th bit is ON or OFF

*/

#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

bool ChkBitOnOff(int iNo)
{
  int iResult;
  int iMask = 0x4000;

  iResult = iNo & iMask;

  return iResult == iMask;
}
int main()
{
  int iValue = 0;
  bool bRet = false;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  bRet = ChkBitOnOff(iValue);

  if (bRet == true)
  {
    printf("15th bit of number %d is ON", iValue);
  }
  else
  {
    printf("15th bit of number %d is OFF", iValue);
  }

  return 0;
}