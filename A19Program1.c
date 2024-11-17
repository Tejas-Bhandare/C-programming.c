/*
  Problem Statement:
    Accept number from user and display below pattern.

    Input : 5
    Output : A B C D E

*/

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  char cAlphabate = 'A';

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%c\t", cAlphabate);
    cAlphabate++;
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