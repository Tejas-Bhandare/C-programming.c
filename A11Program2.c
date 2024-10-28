/*
  Problem Statement :

    Write a program which accept number from user and display its digits in reverse order.

*/

#include <stdio.h>
#include <stdbool.h>

bool CheckZero(int iNo)
{
  int iDigit = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo > 0)
  {
    iDigit = iNo % 10;

    if (iDigit == 0)
    {
      return true;
    }

    iNo = iNo / 10;
  }

  return false;
}

int main()
{
  int iValue = 0;
  bool iRet = false;

  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = CheckZero(iValue);

  if (iRet == true)
  {
    printf("%d contains zero in it", iValue);
  }
  else
  {
    printf("%d does not contains zero in it", iValue);
  }

  return 0;
}