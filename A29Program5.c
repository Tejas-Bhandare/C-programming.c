/*
  Problem statement:
    Write a program which accept string from user reverse that string in place.

    Input : “abcd”

    Output : “dcba”
*/

#include <stdio.h>

void StrRevX(char *str)
{
  char temp = '\0';
  char *start = str;
  char *end = str;

  while (*end != '\0')
  {
    end++;
  }
  end--;

  while (start < end)
  {
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}

int main()
{
  char Arr[30];

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  StrRevX(Arr);

  printf("String after reversal is : %s\n", Arr);

  return 0;
}