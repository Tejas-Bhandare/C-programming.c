/*
  Write the program which accept number from the user and return summation o all its non factors.
*/

#include <stdio.h>

int SumNonFact(int iNo)
{
  int iCnt = 0;
  int iSum = 0;

  for (iCnt = 1; iCnt < iNo; iCnt++)
  {
    if (iNo % iCnt != 0)
    {
      iSum = iSum + iCnt;
    }
  }

  return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number :\n");
  scanf("%d", &iValue);

  iRet = SumNonFact(iValue);
  printf("Addition of all non factors of %d is %d", iValue, iRet);

  return 0;
}