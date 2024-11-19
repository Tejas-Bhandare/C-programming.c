/*
  Problem Statement :
    Write a program which number from user and print that number of $ & * on screen

    Input : 5
    Output : $ * $ * $ * $ * $ *
*/

#include <stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("$ * ");
  }
  printf("\n");
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}