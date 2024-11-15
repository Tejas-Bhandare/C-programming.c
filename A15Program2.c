/*
  Problem Statement :
    Accept N numbers from user and accept one another number as NO ,return index of first occurrence of that NO.
*/

#include <stdio.h>
#include <stdlib.h>

int IndexOfFirstOcc(int Arr[], int iLength, int iNo)
{
  int iCnt = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == iNo)
    {
      return iCnt;
    }
  }

  return -1;
}

int main()
{

  int iSize = 0, iCnt = 0, iRet = 0, iNum = 0;

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

  printf("Enter number to check first occurence :\n");
  scanf("%d", &iNum);

  iRet = IndexOfFirstOcc(p, iSize, iNum);

  if (iRet == -1)
  {
    printf("There is no such number");
  }
  else
  {
    printf("First occurence index of %d is : %d\n", iNum, iRet);
  }

  free(p);

  return 0;
}