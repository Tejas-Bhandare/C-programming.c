/*
  Problem Statement :
    Write a program which check whether 5th & 18th bit is ON or OFF

*/

#include <stdio.h>

typedef int bool;

#define true 1
#define false 0

bool ChkBitOnOff(int iNo)
{
  int iResult;
  int iMask = 0x20010;

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
    printf("5th & 18th bits of number %d are ON", iValue);
  }
  else
  {
    printf("5th or 18th or both bits of number %d are OFF", iValue);
  }

  return 0;
}