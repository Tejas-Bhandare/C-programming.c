/*
  Write a program which accept number from user and print fist 5 multiples of that number
*/
#include <stdio.h>

void DisplayMultiples(int iNo)
{

  int iCnt = 0;
  int iNum = 0;
  for (iCnt = 1; iCnt <= 5; iCnt++)
  {
    iNum = iCnt * iNo;
    printf("%d ", iNum);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  DisplayMultiples(iValue);

  return 0;
}
