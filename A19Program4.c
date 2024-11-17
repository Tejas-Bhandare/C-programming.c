/*
  Problem Statement:
    Accept number from user and display below pattern.

    Input : 4
    Output : # 1 * # 2 * # 3 * # 4 *

*/

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  char cAlphabate = 'A';

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("#\t%d\t*\t", iCnt);
  }
}

int main()
{
  int ivalue = 0;

  printf("Enter number :\n");
  scanf("%d", &ivalue);

  Display(ivalue);

  return 0;
}