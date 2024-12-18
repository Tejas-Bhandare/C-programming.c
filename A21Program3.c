/*
  Problem Statement :
    Accept number of rows and number of columns from user and display below pattern.

    Input : iRow = 4 iCol = 5
    Output :  A A A A A
              B B B B B
              C C C C C
              D D D D D
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j = 0;

  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      printf("%c\t", ('A' + i - 1));
    }

    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows :\n");
  scanf("%d", &iValue1);

  printf("Enter number of columns :\n");
  scanf("%d", &iValue2);

  Display(iValue1, iValue2);

  return 0;
}