/*
  Problem Statement :
    Accept N numbers from user and display all such elements which are divisible by 5.
*/

#include <stdio.h>
#include <stdlib.h>

void IsDivisibleBy5(int Arr[], int iLength)
{
  int iCnt = 0;

  for (iCnt = 0; iCnt < iLength; iCnt++)
  {
    if (Arr[iCnt] % 5 == 0)
    {
      printf("%d ", Arr[iCnt]);
    }
  }
}

int main()
{

  int iSize = 0, iCnt = 0;
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

  printf("Numbers Divisible by 5 are :\n");

  IsDivisibleBy5(p, iSize);

  free(p);

  return 0;
}