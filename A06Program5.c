/*

*/
/*
Problem Statement :
  Write a program which accept number from user and display its table in reverse order.
*/

#include <stdio.h>

void TableReverse(int iNo)
{
  int iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  printf("Table of number %d is \n", iNo);

  for (iCnt = 10; iCnt >= 1; iCnt--)
  {
    printf("%d ", (iNo * iCnt));
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  TableReverse(iValue);

  return 0;
}
