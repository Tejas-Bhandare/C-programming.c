/*
  Problem statement:asm
    Write a program which accept string from user and accept one character. Return index of first occurance of that character.

    Input : Tejas
            e

    Output : 1
*/

#include <stdio.h>

int FirstIndexOf(char *str, char ch)
{
  int iIndex = 0;

  while (*str != '\0')
  {
    if (*str == ch)
    {
      return iIndex;
    }
    str++;
    iIndex++;
  }

  return iIndex;
}

int main()
{
  char Arr[30];
  char cValue = '\0';
  int iRet = 0;

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  printf("Enter character :\n");
  scanf(" %c", &cValue);

  iRet = FirstIndexOf(Arr, cValue);

  printf("Index of first occurance of %c is : %d\n", cValue, iRet);

  return 0;
}