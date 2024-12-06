/*
  Problem Statement :
    Write a program which accept one number from user and count number of ON (1) bits in it without using % and / operator.

      Input : 11
      Output : 3
      Input : 20
      Output : 10
*/

#include <stdio.h>
typedef unsigned long ULONG;

int CountOne(ULONG iNo)
{
  int iCount = 0, iResult = 0;
  int iMask = 0x1;

  while (iNo > 0)
  {
    iResult = iNo & iMask;
    if (iResult == iMask)
    {
      iCount++;
    }
    iNo = iNo >> 1;
  }

  return iCount;
}

int main()
{
  ULONG iValue1 = 0L;
  int iRet = 0;

  printf("Enter number :\n");
  scanf("%lu", &iValue1);

  iRet = CountOne(iValue1);

  printf("Number %lu has %d On (1) bits \n", iValue1, iRet);

  return 0;
}