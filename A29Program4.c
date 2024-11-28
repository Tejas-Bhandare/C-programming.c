/*
  Problem statement:
    Write a program which accept string from user and accept one character. Return index of last occurrence of that character.
*/

#include <stdio.h>

int LastIndexOf(char *str, char ch)
{
  int iIndex = 0, iCounter = 0;

  while (*str != '\0')
  {
    if (*str == ch)
    {
      iIndex = iCounter;
    }
    str++;
    iCounter++;
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

  iRet = LastIndexOf(Arr, cValue);

  printf("Index of last occurance of %c is : %d\n", cValue, iRet);

  return 0;
}