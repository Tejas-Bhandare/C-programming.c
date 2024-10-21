/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept two number from user and display first number in times of second number.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in Integer format.
  If any input is negative then convert into positive .
  We have to Print first number in times of second number on screen.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the first input from user
      Accept the second input from user
      Update accepted second input to positive integer if it is negative
      Print first number in times of second number on screen.
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
//  Description  : It is used to Print first Integer in times of second Integer on screen.
//  Input : Integer, Integer
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo1, int iNo2)
{
  int iCnt = 0;

  if (iNo2 < 0)
  {
    iNo2 = -iNo2;
  }
  for (iCnt = 1; iCnt <= iNo2; iCnt++)
  {
    printf("%d ", iNo1);
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to accept two numbers from user and display first number in times of second number on screen.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue1 = 0;
  int iValue2 = 0;

  printf("Enter the first number: ");
  scanf("%d", &iValue1);

  printf("Enter the second number: ");
  scanf("%d", &iValue2);

  Display(iValue1, iValue2);

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the first number: 12
           Enter the second number: 6
    Output: 12 12 12 12 12 12
  Test case 2 :
    Input: Enter the first number: -15
           Enter the second number: 6
    Output: -15 -15 -15 -15 -15
  Test case 3 :
    Input: Enter the first number: 10
           Enter the second number: -4
    Output: 10 10 10 10
  Test case 4 :
    Input: Enter the first number: -20
           Enter the second number: -3
    Output: -20 -20 -20

*/