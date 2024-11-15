/*
  Problem Statement :
    Accept N numbers from user and display summation of digits of each number.
*/

#include <stdio.h>
#include <stdlib.h>

void PrintDigitsSum(int Arr[], int iLength)
{
  int iCnt = 0;

  for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
  {
    int iDigit = 0;
    int iDigitsSum = 0;
    int iNo = Arr[iCnt];

    while (iNo > 0)
    {
      iDigit = iNo % 10;
      iDigitsSum = iDigitsSum + iDigit;
      iNo = iNo / 10;
    }

    printf("Addition of digits of %d is  : %d\n", Arr[iCnt], iDigitsSum);
  }
}

int main()
{

  int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;

  int *p = NULL;

  printf("Enter number of elements :\n");
  scanf("%d", &iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if (p == NULL)
  {
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter %d elements \n", iSize);

  for (iCnt = 0; iCnt < iSize; iCnt++)
  {
    printf("Enter element : %d\n", iCnt + 1);
    scanf("%d", &p[iCnt]);
  }

  PrintDigitsSum(p, iSize);

  free(p);

  return 0;
}