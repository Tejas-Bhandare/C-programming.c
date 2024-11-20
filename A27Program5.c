/*
  Problem statement :
    Write a program which accept string from user and display it inn
    reverse order.

    Input : Tejas
    Output  : sajeT
*/

#include <stdio.h>
#include <stdbool.h>

bool CheckVowel(char *str)
{
  int iLength = 0;
  while (*str != '\0')
  {
    iLength++;
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