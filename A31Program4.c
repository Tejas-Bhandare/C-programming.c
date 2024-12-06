/*
  Problem statement:
    Write a program which accept string from user and copy that characters of that string into another string by converting all capital characters into small case.

    Input : “TEJAS 253M”

    Output : “tejas 253m”
*/

#include <stdio.h>

void StrCpySmall(char *str, char *dest)
{

  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *dest = (*str + 32);
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

  StrCpySmall(Arr, Brr);

  printf("String after lowercase :\n");
  printf("%s", Brr);

  return 0;
}