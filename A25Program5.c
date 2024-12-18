/*
// Input : row = 6, col = 6
// Output :

1       2       3       4       5       6
1       2                               6
1               3                       6
1                       4               6
1                               5       6
1       2       3       4       5       6

*/
#include <stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j = 0;

  // filter
  if (iRow != iCol)
  {
    printf("Invalid input \n");
    return;
  }

  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      if (i == 1 || j == 1 || i == iRow || j == iCol)
      {
        printf("%d\t", j);
      }
      else if (i == j)
      {
        printf("%d\t", j);
      }
      else
      {
        printf(" \t");
      }
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