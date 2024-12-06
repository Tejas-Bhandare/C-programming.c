/*
  Problem statement:
    Write a program which accept string from user and copy that characters of that string into another string in reverse order.

    Input : “Marvellous Python”

    Output : “nohtyP suollevraM”
*/

#include <stdio.h>

void StrCpyRev(char *str, char *dest)
{
  char *start = dest;
  char *end = str;

  while (*end != '\0')
  {
    end++;
  }
  end--;

  while (start <= end)
  {
    *dest = *end;
    dest++;
    end--;
  }
}

int main()
{
  char Arr[30];
  char Brr[30];

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  StrCpyRev(Arr, Brr);

  printf("String after reversal :\n");
  printf("%s", Brr);

  return 0;
}