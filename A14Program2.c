/*
  Problem Statement :
    Accept N numbers from user and return difference between frequency of even number and odd numbers.
*/

#include <stdio.h>
#include <stdlib.h>

int FrequencyDiff(int Arr[], int iLength)
{
  int iCnt = 0, iEvenCount = 0, iOddCount = 0, iDifference = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] % 2 == 0)
    {
      iEvenCount++;
    }
    else
    {
      iOddCount++;
    }
  }

  iDifference = iEvenCount - iOddCount;

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

  iRet = FrequencyDiff(p, iSize);

  printf("Difference between frequency of Even numbers and Odd numbers is : %d\n", iRet);

  free(p);

  return 0;
}