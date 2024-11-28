/*
  Problem Statement:
    Write a program which accept string from user and accept one character. Check wether that character is present in string or not.

    Input: Tejas
            e
    Output: True
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkChar(char *str, char ch)
{
  while (*str != '\0')
  {
    if (*str == ch)
    {
      return true;
    }
    str++;
  }
  return false;
}

int main()
{
  char Arr[20];
  char cValue = '\0';
  bool bRet = false;

  printf("Enter string :\n");
  scanf("%[^'\n']s", Arr);

  // Added while (getchar() != '\n'); to consume the newline character left in the input buffer after reading the string.
  // while (getchar() != '\n');

  printf("Enter character :\n");

  // Adding a space before %c in scanf tells it to skip any leading whitespace (including newline characters) in the input buffer.
  scanf(" %c", &cValue);

  bRet = ChkChar(Arr, cValue);

  if (bRet == true)
  {
    printf("Character found");
  }
  else
  {
    printf("Character not found");
  }

  return 0;
}