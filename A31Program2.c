/*
  Problem statement:
    Write a program which accept string from user and copy that characters of that string into another string by removing all white spaces.

    Input : “T e j a s”

    Output : “Tejas”
*/

#include <stdio.h>

void StrCpyX(char *str, char *dest)
{

  while (*str != '\0')
  {
    if (*str == ' ')
    {
      str++;
    }
    else
    {
      *dest = *str;
      dest++;
      str++;
    }
  }
}

int main()
{
  char Arr[30];
  char Brr[30];

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  StrCpyX(Arr, Brr);

  printf("String after removing all white spaces :\n");
  printf("%s", Brr);

  return 0;
}