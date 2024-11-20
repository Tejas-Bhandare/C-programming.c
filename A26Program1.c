/*
Problem Statement :
  Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.
*/
#include <stdio.h>

void Display()
{
  int iCnt = 0, iNum = 0;
  printf("*********ASCII table*********");
  printf("Dec\tHex\tChar");

  for (iCnt = 0; iCnt <= 255; iCnt++)
  {

    printf("%d\t", iCnt);
    printf("%d", iCnt / 16);
    iNum = iCnt % 16;
    if (iNum < 10)
    {
      printf("%d\t", iNum);
    }
    else
    {
      switch (iNum)
      {
      case 10:
        printf("A\t");
        break;
      case 11:
        printf("B\t");
        break;
      case 12:
        printf("C\t");
        break;
      case 13:
        printf("D\t");
        break;
      case 14:
        printf("E\t");
        break;
      default:
        printf("F\t");
      }
    }
    printf("%c", iCnt);
    printf("\n");
  }
}

int main()
{
  Display();

  return 0;
}