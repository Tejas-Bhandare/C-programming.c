/*

*/
/*
Problem Statement :
  Write a program which accept number from user and display below pattern.

  Input : 5
  Output : * * * * * # # # # #
*/

#include <stdio.h>

void PrintPattern(int iNo)
{
  int iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("* ");
  }
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("# ");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  PrintPattern(iValue);

  return 0;
}
