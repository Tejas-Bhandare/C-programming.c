/*
  Problem statement:
    Write a program which accept string from user and copy that characters of that string into another string by converting all small characters into capital case.

    Input : “Tejas 253m”

    Output : “TEJAS 253M”
*/

#include <stdio.h>

void StrCpyCap(char *str, char *dest)
{

  while (*str != '\0')
  {
    if (*str >= 'a' && *str <= 'z')
    {
      *dest = (*str - 32);
      dest++;
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

  StrCpyCap(Arr, Brr);

  printf("String after capital case:\n");
  printf("%s", Brr);

  return 0;
}