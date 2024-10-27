/*
  Problem Statement :
    Write a program accept number from user and print that number of $ and * on screen

*/

#include <stdio.h>

void Pattern(int iNo)
{
  // Updater for negative input values
  if (iNo < 0)
  {
    iNo = -iNo;
  }

  int iCnt = 0;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("$ * ");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}