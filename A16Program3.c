/*
  Problem Statement :
    Accept N numbers from user and return the difference between largest and smallest number.
*/

#include <stdio.h>
#include <stdlib.h>

int MinMaxDiff(int Arr[], int iLength)
{
  int iCnt = 0, iMin = Arr[0], iMax = 0, iDifference = 0;

  for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
  {
    if (Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];
    }
    if (Arr[iCnt] < iMin)
    {
      iMin = Arr[iCnt];
    }
  }

  iDifference = iMax - iMin;
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

  iRet = MinMaxDiff(p, iSize);

  printf("Difference between Largest and Smallest numbers is : %d\n", iRet);

  free(p);

  return 0;
}