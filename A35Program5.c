/*
  Problem Statement :
    Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.

    Input : 10 3 7
    Output : TRUE
*/

#include <stdio.h>

typedef int bool;
typedef unsigned long ULONG;
#define true 1
#define false 0

ULONG ToggleBitRange(ULONG iNo, int iStart, int iEnd)
{
  ULONG iResult = 0L;
  int iMask = 0x1;

  iMask = ~iMask;
  iMask = iMask << (iEnd - iStart);
  iMask = ~iMask;
  iMask = iMask << (iStart - 1);

  iResult = iNo ^ iMask;

  return iResult;
}
int main()
{
  ULONG iValue1 = 0L, iRet = 0L;
  int iValue2 = 0, iValue3 = 0;

  printf("Enter number :\n");
  scanf("%lu", &iValue1);

  printf("Enter starting position of bit  :\n");
  scanf("%d", &iValue2);

  printf("Enter second Ending position of bit :\n");
  scanf("%d", &iValue3);

  iRet = ToggleBitRange(iValue1, iValue2, iValue3);

  printf("Number %lu after Toggle bits at position between %d and %d is :\n", iValue1, iValue2, iValue3);

  printf("%lu", iRet);

  return 0;
}