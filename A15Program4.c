/*
  Problem Statement :
    Accept N numbers from user and accept Range, Display all elements from that range
*/

#include <stdio.h>
#include <stdlib.h>

void PrintNumsInRange(int Arr[], int iLength, int iStart, int iEnd)
{
  int iCnt = 0;

  for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
  {
    if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
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

  printf("Enter starting point of Range : \n");
  scanf("%d", &iValue1);

  printf("Enter Ending point of Range : \n");
  scanf("%d", &iValue2);

  printf("Numbers in Range of %d and %d are : \n", iValue1, iValue2);

  PrintNumsInRange(p, iSize, iValue1, iValue2);

  free(p);

  return 0;
}