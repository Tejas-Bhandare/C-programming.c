#include <stdio.h>

int main()
{
  int iNum1 = 0;
  int iNum2 = 0;
  int iSum = 0;

  printf("Enter first number : \n");
  scanf("%d", &iNum1);
  printf("Enter second number : \n");
  scanf("%d", &iNum2);

  iSum = iNum1 + iNum2;
  printf("Addition of %d and %d is : %d\n", iNum1, iNum2, iSum);

  return 0;
}