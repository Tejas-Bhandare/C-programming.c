/*
  Problem statement:
    Accept Character from user and check whether it is alphabet or not (A-Z a-z).

    Input : F

    Output : true
*/

#include <stdio.h>
#include <stdbool.h>

bool CheckAlpha(char ch)
{
  bool isAlphabate = false;

  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
    isAlphabate = true;
  }

  return isAlphabate;
}

int main()
{
  char cValue = '\0';
  bool bRet = false;

  printf("Enter character :\n");
  scanf("%c", &cValue);

  bRet = CheckAlpha(cValue);

  if (bRet == true)
  {
    printf("It is Alphabate");
  }
  else
  {
    printf("It is not Alphabate");
  }

  return 0;
}