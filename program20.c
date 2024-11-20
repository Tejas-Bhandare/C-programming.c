#include <stdio.h>

void DisplayTimeTable(int iStd)
{
  if (iStd == 8)
  {
    printf("Your Exam is at 9:30 AM\n");
  }
  else if (iStd == 9)
  {
    printf("Your Exam is at 10:30 AM\n");
  }
  else if (iStd == 10)
  {
    printf("Your Exam is at 11:30 AM\n");
  }
  else
  {
    printf("Sorry! we don't have the information about your standard\n");
  }
}

int main()
{
  int iValue = 0;

  printf("Please enter your standard : \n");
  scanf("%d", &iValue);

  DisplayTimeTable(iValue);

  return 0;
}