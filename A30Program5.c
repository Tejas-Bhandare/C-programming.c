/*
  Problem statement:
    Accept Character from user and check whether it is small or not (a-z).

    Input : F

    Output : true
*/

#include <stdio.h>
#include <stdbool.h>

void DisplaySchedule(char cDiv)
{
  if (cDiv > 'Z')
  {
    cDiv = cDiv - 32;
  }

  switch (cDiv)
  {
  case 'A':
    printf("Your exam at 07:00 AM");
    break;

  case 'B':
    printf("Your exam at 08:30 AM");
    break;
  case 'C':
    printf("Your exam at 09:20 AM");
    break;

  case 'D':
    printf("Your exam at 10:30 AM");
    break;

  default:
    printf("Invlid inout");
  }
}

int main()
{
  char cValue = '\0';

  printf("Enter your division :\n");
  scanf("%c", &cValue);

  DisplaySchedule(cValue);

  return 0;
}