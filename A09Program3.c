/*

*/
/*
Problem Statement :
  Write a program which accept distance in kilometre and convert it into meter. (1 kilometre = 1000 Meter)
*/

#include <stdio.h>

double KMToMeter(int iKM)
{
  int iMeter = 0;
  iMeter = iKM * 1000;

  return iMeter;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter Kilometers :\n");
  scanf("%d", &iValue);

  iRet = KMToMeter(iValue);

  printf("%d KM are %d meters", iValue, iRet);

  return 0;
}
