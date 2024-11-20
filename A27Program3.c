/*
  Problem statement :
    Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

    Input : Tejas Bhandare
    Output  : 9
*/

#include <stdio.h>

int Difference(char *str)
{
  int iCapitalCount = 0, iSmallCount = 0, iDifference = 0;

  if (*str == '\0')
  {
    printf("Invalid Input");
    return;
  }

  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      iCapitalCount++;
    }
    else if (*str >= 'a' && *str <= 'z')
    {
      iSmallCount++;
    }
    str++;
  }

  iDifference = iSmallCount - iCapitalCount;

  return iDifference;
}

int main()
{
  char Arr[30];
  int iRet = 0;

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  iRet = Difference(Arr);

  printf("Difference between count of Small and Capital letters is : %d\n", iRet);

  return 0;
}