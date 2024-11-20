/*
  Problem statement :
    Write a program which accept string from user and count number of small characters.

    Input : Tejas Bhandare
    Output : 11
*/

#include <stdio.h>

int CountSmall(char *str)
{
  int iCount = 0;

  if (*str == '\0')
  {
    printf("Invalid Input");
    return;
  }

  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
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

  iRet = CountSmall(Arr);

  printf("Count of Small letters is : %d\n", iRet);

  return 0;
}