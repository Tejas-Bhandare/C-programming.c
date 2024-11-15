/*
  Problem Statement :
    Accept N numbers from user and return frequency of 11 form it.
*/

#include <stdio.h>
#include <stdlib.h>

int FrequencyOf11(int Arr[], int iLength)
{
  int iCnt = 0, iCount11 = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == 11)
    {
      iCount11++;
    }
  }

  return iCount11;
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

  iRet = FrequencyOf11(p, iSize);

  printf("Frequency of 11 is : %d\n", iRet);

  free(p);

  return 0;
}