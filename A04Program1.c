/*
  problem statement :
    Write the program which accept number from user and display its multiplication is factors
*/
#include <stdio.h>

int DisplayFactorsProduct(int iNo)
{
  int iCnt = 0;
  int iProduct = 1;
  for (iCnt = 1; iCnt <= iNo / 2; iCnt++)
  {
    if (iNo % iCnt == 0)
    {
      iProduct = iProduct * iCnt;
    }
  }

  return iProduct;
}

int main()
{

  int ivalue = 0;
  int iResult = 0;

  printf("Enter number :\n");
  scanf("%d", &ivalue);

  iResult = DisplayFactorsProduct(ivalue);

  printf("Multiplication of factors of %d is %d", ivalue, iResult);

  return 0;
}