/*
  Problem Statement :

    Write a program which accept range from user and display all even numbers in between
    that range.
*/

#include <stdio.h>
void DisplayRangeEven(int iStart, int iEnd)
{
  int iCnt = 0;

  if (iStart > iEnd)
  {
    printf("Enter valid range : start point < end point");
  }

  for (iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    if (iCnt % 2 == 0)
    {
      printf("%d ", iCnt);
    }
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter starting point :\n");
  scanf("%d", &iValue1);

  printf("Enter end point :\n");
  scanf("%d", &iValue2);

  DisplayRangeEven(iValue1, iValue2);

  return 0;
}