/*
  Problem Statement:
    Accept number from user and display below pattern.

    Input : 5
    Output : 5 # 4 # 3 # 2 # 1 #

*/

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  char cAlphabate = 'A';

  for (iCnt = iNo; iCnt >= 1; iCnt--)
  {
    printf("%d\t#\t", iCnt);
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