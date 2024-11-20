/*
  Start
    1. Accept total Marks.
    2. Accept the obtained marks
    3. Calculate the percetage of the marks
    4. Display the calculated percentage
  End
*/

#include <stdio.h>

float CalculatePercentage(int iTotalMarks, int iObtainedMarks)
{
  float fPercentage = 0.0f;
  fPercentage = ((float)iObtainedMarks / (float)iTotalMarks) * 100;
  return fPercentage;
}

int main()
{

  int iValue1 = 0, iValue2 = 0;
  float fResult = 0.0f;

  printf("Enter the Toatal Marks : \n");
  scanf("%d", &iValue1);

  printf("Enter the obtained marks : \n");
  scanf("%d", &iValue2);

  fResult = CalculatePercentage(iValue1, iValue2);

  printf("Percent obtained is : %f\n", fResult);

  return 0;
}
