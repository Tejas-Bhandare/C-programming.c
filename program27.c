#include <stdio.h>

void Display(int iCount)
{
  int iCounter = 0;
  for (iCounter = 1; iCounter <= iCount; iCounter++)
  {
    printf("Jai ganesh ...... !\n");
  }
}
// Iteration  approach
int main()
{
  int iValue = 11;

  // printf("Enter the count to print the statement \n");
  // scanf("%d", &iValue);

  Display(iValue);

  return 0;
}