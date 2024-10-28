
/*
  Problem Statement :

    Write a program which accept range from user and display all numbers in between
    that range in reverse order.
*/

#include <stdio.h>
void DisplayRangeRev(int iStart, int iEnd)
{
  int iCnt = 0;

  if (iStart > iEnd)
  {
    printf("Enter valid range : start point < end point");
  }

  for (iCnt = iEnd; iCnt >= iStart; iCnt--)
  {
    printf("%d ", iCnt);
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter starting point :\n");
  scanf("%d", &iValue1);

  printf("Enter end point :\n");
  scanf("%d", &iValue2);

  DisplayRangeRev(iValue1, iValue2);

  return 0;
}