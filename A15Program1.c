/*
  Problem Statement :
    Accept N numbers from user and accept one another number as NO ,check whether NO is present or not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsNoPresent(int Arr[], int iLength, int iNo)
{
  int iCnt = 0;
  bool bIsNoPresent = false;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == iNo)
    {
      bIsNoPresent = true;
      return bIsNoPresent;
    }
  }

  return bIsNoPresent;
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

  printf("Enter number to check is present of not :\n");
  scanf("%d", &iNum);

  iRet = IsNoPresent(p, iSize, iNum);

  printf("Frequency of %d is : %d\n", iNum, iRet);

  if (iRet == true)
  {
    printf("%d is present", iNum);
  }
  else
  {
    printf("%d is absent", iNum);
  }

  free(p);

  return 0;
}