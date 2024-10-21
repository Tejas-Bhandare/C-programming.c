/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept a number from user and print that numbers of * on screen.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in Integer format.
  If any input is negative then convert into positive .
  We have to Print * on the screen as many times as the given integer.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Update accepted innput to positive integer if it is negative
      Print * on the screen as many times as the given integer.
    Stop
*/

/*
  Step3: Decide the programming language.

  According to problem statement we select C programming language.
*/

/*
  Step4: Write the program.
*/

#include <stdio.h>

/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Descriptio  : It is used to Print * on the screen as many times as the given integer.
//  Input : Integer
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
  int iCnt = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iCnt < iNo)
  {
    printf("*");
    iCnt++;
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to accept a number from user and print that numbers of * on screen.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue = 0;

  printf("Enter the number: ");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the number : 10
    Output: **********
  Test case 2 :
    Input: Enter the number : -5
    Output: *****

*/