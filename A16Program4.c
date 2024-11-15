/*
  Problem Statement :
    Accept N numbers from user and display all such numbers which contains 3 digits in it.
*/

#include <stdio.h>
#include <stdlib.h>

void Print3DigitNums(int Arr[], int iLength)
{
  int iCnt = 0;

  for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
  {
    int iCountDigits = 0;
    int iNo = Arr[iCnt];

    while (iNo > 0)
    {
      iCountDigits++;
      iNo = iNo / 10;
    }

    if (iCountDigits == 3)
    {
      printf("%d ", Arr[iCnt]);
    }
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

  printf("3 digits Numbers are : \n");

  Print3DigitNums(p, iSize);

  free(p);

  return 0;
}