/*
  Problem Statement:
    Write a program which accept string from user and accept one character. Return frequency of that character.

    Input: Tejas
            e
    Output: 1
*/

#include <stdio.h>

int ChkChar(char *str, char ch)
{
  int iCount = 0;
  while (*str != '\0')
  {
    if (*str == ch)
    {
      iCount++;
    }
    str++;
  }
  return iCount;
}

int main()
{
  char Arr[20];
  char cValue = '\0';
  int iRet = 0;

  printf("Enter string :\n");
  scanf("%[^'\n']s", Arr);

  // Added while (getchar() != '\n'); to consume the newline character left in the input buffer after reading the string.
  // while (getchar() != '\n');

  printf("Enter character :\n");

  // Adding a space before %c in scanf tells it to skip any leading whitespace (including newline characters) in the input buffer.
  scanf(" %c", &cValue);

  iRet = ChkChar(Arr, cValue);

  printf("Frequency of %c in string is : %d\n", cValue, iRet);

  return 0;
}