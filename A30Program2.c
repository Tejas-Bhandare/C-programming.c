/*
  Problem statement:
    Accept Character from user and check whether it is capital or not (A-Z).

    Input : F

    Output : true
*/

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
  bool isCapital = false;

  if ((ch >= 'A' && ch <= 'Z'))
  {
    isCapital = true;
  }

  return isCapital;
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
    printf("It is capital letter");
  }
  else
  {
    printf("It is not capital letter");
  }

  return 0;
}