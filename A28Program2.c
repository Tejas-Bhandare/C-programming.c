/*
Problem Statement:
  Write a program which accept string from user and convert it into Upper case.

  Input : Tejas
  output : TEJAS
*/

#include <stdio.h>

void StrUpperCase(char str[])
{
  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *str = *str - 32;
    }
    str++;
  }
}

int main()
{
  char Arr[30];

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  StrUpperCase(Arr);

  printf("Upper case String: %s\n", Arr);

  return 0;
}