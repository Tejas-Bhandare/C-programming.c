/*
  Problem Statement :
    Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
*/

#include <stdio.h>
#include <stdlib.h>

int Difference(int Arr[], int iLength)
{
  int iEvenSum = 0, iOddSum = 0, iDifference = 0, iCnt = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] % 2 == 0)
    {
      iEvenSum = iEvenSum + Arr[iCnt];
    }
    else
    {
      iOddSum = iOddSum + Arr[iCnt];
    }
  }

  iDifference = iEvenSum - iOddSum;

  return iDifference;
}

int main()
{

  int iSize = 0, iCnt = 0, iRet = 0;
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

  iRet = Difference(p, iSize);

  printf("Result is %d ", iRet);

  free(p);

  return 0;
}