/*
  Problem statement:
    Accept Character from user and check whether it is small or not (a-z).

    Input : F

    Output : true
*/

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
  bool isSmall = false;

  if ((ch >= 'a' && ch <= 'z'))
  {
    isSmall = true;
  }

  return isSmall;
}

int main()
{
  char cValue = '\0';
  bool bRet = false;

  printf("Enter character :\n");
  scanf("%c", &cValue);

  bRet = CheckCapital(cValue);

  if (bRet == true)
  {
    printf("It is small letter");
  }
  else
  {
    printf("It is not small letter");
  }

  return 0;
}