/*
Problem Statement:
  Write a program which accept string from user and display only digits from that string.

  Input : Tejas82364bh452
  output : 82364456
*/

#include <stdio.h>

void StrUpperCase(char *str)
{

  while (*str != '\0')
  {
    if (*str >= 47 && *str <= 56)
    {
      printf("%c", *str);
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
  
  return 0;
}