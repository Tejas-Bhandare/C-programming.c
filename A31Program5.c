/*
  Problem statement:
    Write a program which accept string from user and copy that characters of that string into another string by toggling the case.

    Input : “Tejas 253M”

    Output : “tEJAS 253m”
*/

#include <stdio.h>

void StrCpyToggle(char *str, char *dest)
{

  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *dest = (*str + 32);
      dest++;
      str++;
    }
    else if (*str >= 'a' && *str <= 'z')
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

  StrCpyToggle(Arr, Brr);

  printf("String after toggle :\n");
  printf("%s", Brr);

  return 0;
}