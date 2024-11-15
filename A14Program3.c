/*
  Problem Statement :
    Accept N numbers from user check whether that numbers contains 11 in it or not.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool CheckIs11Present(int Arr[], int iLength)
{
  int iCnt = 0, bIs11Found = false;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] == 11)
    {
      bIs11Found = true;
      return bIs11Found;
    }
  }

  return bIs11Found;
}

int main()
{

  int iSize = 0, iCnt = 0;
  bool iRet = false;
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

  iRet = CheckIs11Present(p, iSize);

  if (iRet == true)
  {
    printf("11 is present");
  }
  else
  {
    printf("11 is absent");
  }

  free(p);

  return 0;
}