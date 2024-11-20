/*
  start
    Accept the percentage from user
    Idf the percentage is less thsn 40 diaplay Fail
    And if it is greater than or equal to 40 then display PASS
  stop
*/

#include <stdio.h>

void DisplayResult(float fPercentage)
{
  if (fPercentage > 100.0f)
  {
    printf("Invalid Percentage. Please enter the value in the range 0 to 100 \n");
    return;
  }
  if (fPercentage >= 40.0f)
  {
    printf("You are PASS");
  }
  else
  {
    printf("You are FAIL");
  }
}

int main()
{
  float fValue = 0.0f;

  printf("Enter the percentage : \n");
  scanf("%f", &fValue);

  DisplayResult(fValue);

  return 0;
}