/*
  Write a program which accept number from user and print all odd numbers up to  that number
*/
#include <stdio.h>

void DisplayOddNums(int iNo)
{

  int iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if (iCnt % 2 != 0)
    {
      printf("%d ", iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  DisplayOddNums(iValue);

  return 0;
}
