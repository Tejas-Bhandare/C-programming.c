/*
  Problem Statement :
    Write a program which check whether 7th, 15th, 21st and 28th bit is ON or OFF

*/

#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

bool ChkBitOnOff(int iNo)
{
  int iResult;
  int iMask = 0x8104040;

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
    printf("7th, 15th, 21st and 28th bits of number %d are ON", iValue);
  }
  else
  {
    printf("some of 7th, 15th, 21s, 28th bits of number %d are OFF", iValue);
  }

  return 0;
}