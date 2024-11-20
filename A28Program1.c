/*
Problem Statement:
  Write a program which accept string from user and convert it into lower case.

  Input : Tejas
  output : tejas
*/

#include <stdio.h>

void StrLowerCase(char str[])
{
  int i = 0;

  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *str = *str + 32;
    }
  }
}

int main()
{
  char Arr[30];

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  StrLowerCase(Arr);

  printf("Lower case String: %s\n", Arr);

  return 0;
}