/*
  Problem Statemnt :
    Write a program which accept number from user and print numbers till that number
*/

#include <stdio.h>

void Display(int iNo)
{
  if (iNo < 0)
  {
    iNo = -iNo;
  }

  int iCnt = 0;

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d ", iCnt);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}