/*
  Problem statement :
    Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

    Input : Tejas Bhandare
    Output  : 9
*/

#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char *str)
{
  while (*str != '\0')
  {
    if (*str >= 'A' && *str <= 'Z')
    {
      *str = *str + 32;
    }

    if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
    {
      return true;
    }
    str++;
  }

  return false;
}

int main()
{
  char Arr[30];
  bool iRet = false;

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  iRet = CheckVowel(Arr);

  if (iRet == true)
  {
    printf("String '%s' contains vowels in it", Arr);
  }
  else
  {
    printf("String '%s' does not contains vowels in it", Arr);
  }

  return 0;
}