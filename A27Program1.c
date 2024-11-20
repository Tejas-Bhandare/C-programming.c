/*
  Problem statement :
    Write a program which accept string from user and count number of captial characters.

    Input : Tejas Bhandare
    Output : 2
*/

#include <stdio.h>

int CountCapital(char *str)
{
  int iCount = 0;

  if (*str == '\0')
  {
    printf("Invalid Input");
    return;
  }
  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      iCount++;
    }
    str++;
  }

  return iCount;
}

int main()
{
  char Arr[30];
  int iRet = 0;

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  iRet = CountCapital(Arr);

  printf("Count of Capital letters is : %d\n", iRet);

  return 0;
}