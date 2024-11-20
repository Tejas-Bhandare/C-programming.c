/*
  Problem Statement:
    Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

    Input : %
    Output : TRUE
    Input : d
    Output : FALSE
*/

#include <stdio.h>
#include <stdbool.h>

bool ChkSpecial(char ch)
{
  if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  char cValue = '\0';
  bool bRet = false;

  printf("Enter a character :\n");
  scanf("%c", &cValue);

  bRet = ChkSpecial(cValue);

  if (bRet == true)
  {
    printf("It is special Character");
  }
  else
  {
    printf("It is not a special Character");
  }

  return 0;
}