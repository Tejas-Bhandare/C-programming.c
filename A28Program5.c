/*
Problem Statement:
  Write a program which accept string from user and display only digits from that string.

  Input : Tejas82364bh452
  output : 82364456
*/

#include <stdio.h>

int CountWhiteSpace(char *str)
{
  int iWhiteCount = 0;

  while (*str != '\0')
  {
    if (*str == 32)
    {
      iWhiteCount++;
    }
    str++;
  }

  return iWhiteCount;
}

int main()
{
  char Arr[30];
  int iRet = 0;

  printf("Enter String :\n");
  scanf("%[^'\n']s", Arr);

  iRet = CountWhiteSpace(Arr);

  printf("White space count is :%d\n", iRet);
  return 0;
}