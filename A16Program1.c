/*
  Problem Statement :
    Accept N numbers from user and return the largest number.
*/

#include <stdio.h>
#include <stdlib.h>

int Max(int Arr[], int iLength)
{
  int iCnt = 0, iMax = 0;

  for (iCnt = iLength - 1; iCnt >= 0; iCnt--)
  {
    if (Arr[iCnt] > iMax)
    {
      iMax = Arr[iCnt];
    }
  }

  return iMax;
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

  iRet = Max(p, iSize);

  printf("Largest numbers is : %d\n", iRet);

  free(p);

  return 0;
}