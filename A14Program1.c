/*
  Problem Statement :
    Accept N numbers from user and display all such elements which are multiples of 11.
*/

#include <stdio.h>
#include <stdlib.h>

int CountEvenNums(int Arr[], int iLength)
{
  int iCnt = 0, iEvenCnt = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] % 2 == 0)
    {
      iEvenCnt++;
    }
  }
  return iEvenCnt;
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

  iRet = CountEvenNums(p, iSize);

  printf("Count of Even numbers is : %d\n", iRet);

  free(p);

  return 0;
}