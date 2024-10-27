/*
  Problem Statement :
    Write a program which accept number from the user and display its factors in decreasing order
*/

#include <stdio.h>

void FactRev(int iNo)
{
  int iCnt = 0;

  for (iCnt = iNo / 2; iNo >= 1; iCnt--)
  {
    if (iNo % iCnt == 0)
    {
      printf("%d ", iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("Enter  number: \n");
  scanf("%d", &iValue);

  printf("Factors in  decreasing order :\n");

  FactRev(iValue);

  return 0;
}