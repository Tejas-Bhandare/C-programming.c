/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept a number from user and print that number of even numbers on screen.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in Integer format.
  We have to print given number of even numbers on screen.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Print given number of even numbers on screen.
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
//  Function Name : PrintEven
//  Description : It is used to Print given number of even Integers on screen.
//  Input : Integer
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
  int iCnt = 0;
  // Filter for integers < 0
  if (iNo < 0)
  {
    return;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("%d ", (iCnt * 2));
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to accept a number from user and Print given number of even numbers on screen.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue = 0;

  printf("Enter the number: ");
  scanf("%d", &iValue);

  PrintEven(iValue);

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the number : 10
    Output: 2 4 6 8 10 12 14 16 18 20
  Test case 2 :
    Input: Enter the number : 3
    Output: 2 4 6

*/