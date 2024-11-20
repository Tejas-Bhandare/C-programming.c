/*
Problem Statement:
  3.Write a program which accept string from user and toggle the case.

  Input : Tejas82364bh452
  output : 82364456
*/

#include <stdio.h>

void StrUpperCase(char *str)
{
  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *str = *str + 32;
    }
    else if (*str >= 'a' && *str <= 'z')
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

  printf("Toggled String: %s\n", Arr);

  return 0;
}