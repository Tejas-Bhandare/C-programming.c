/*
  Problem Statement:
    Accept number from user and display below pattern.

    Input : 8
    Output : 2 4 6 8 10 12 14 16

*/

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  char cAlphabate = 'A';

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d\t", (2 * iCnt));
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