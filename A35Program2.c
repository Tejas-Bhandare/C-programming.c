/*
  Problem Statement :
    Write a program which accept two numbers from user and display position of common ON bits from that two numbers.

      Input : 10 15    (1010 1111)
      Output : 2 4
      Input : 29 31    (11101 11111)
      Output : 1 3 4 5
*/

#include <stdio.h>
typedef unsigned long ULONG;

void CommonOnBits(ULONG iNo1, ULONG iNo2)
{
  int iCount = 1, iResult1 = 0, iResult2 = 0;
  int iMask = 0x1;

  while (iNo1 > 0)
  {
    iResult1 = iNo1 & iMask;
    iResult2 = iNo2 & iResult1;
    if (iResult2 == iMask)
    {
      printf("%d ", iCount);
    }

    iCount++;

    iNo1 = iNo1 >> 1;
    iNo2 = iNo2 >> 1;
  }
}

int main()
{
  ULONG iValue1 = 0L, iValue2 = 0L;

  printf("Enter first number :\n");
  scanf("%lu", &iValue1);

  printf("Enter second number :\n");
  scanf("%lu", &iValue2);

  printf("Numbers %lu and %lu has common On (1) bits on following positions :\n", iValue1, iValue2);

  CommonOnBits(iValue1, iValue2);

  return 0;
}