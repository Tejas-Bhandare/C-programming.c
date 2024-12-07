#include <stdio.h>

void Display(int iFrequency)
{
  int iCounter = 0;

  for (iCounter = 1; iCounter <= iFrequency; iCounter++)
  {
    printf("Jai Ganesh ...... !\n");
  }
}

int main()
{
  int iValue = 0;

  printf("Enter the frequency : \n");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}