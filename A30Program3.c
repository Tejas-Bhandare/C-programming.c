/*
  Problem statement:
    Accept Character from user and check whether it is digit or not (0-9).

    Input : 5

    Output : true
*/

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
  bool isDigit = false;

  if ((ch >= '0' && ch <= '9'))
  {
    isDigit = true;
  }

  return isDigit;
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
    printf("It is digit");
  }
  else
  {
    printf("It is not digitr");
  }

  return 0;
}