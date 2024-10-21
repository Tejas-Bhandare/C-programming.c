/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept a number from user and check whether number is even or odd.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in Integer format.
  If any input is negative then convert into positive .
  We have to Print "Odd" if number is odd, Print "Even" if number is even

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Update accepted innput to positive integer if it is negative
      Print "Odd" if Integer is odd, Print "Even" if Integer is even.
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

typedef int BOOL;

#define TRUE 1
#define FALSE 0
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckEven
//  Description : It is used to return BOOL "FALSE" if Integer is odd or "TRUE" if Integer is even..
//  Input : Integer
//  Output : Bool
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

BOOL CheckEven(int iNo)
{
  if (iNo % 2 == 0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to accept a number from user and Print "Odd" if Integer is odd, Print "Even" if Integer is even.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue = 0;
  BOOL bResult = FALSE;

  printf("Enter the number: ");
  scanf("%d", &iValue);

  bResult = CheckEven(iValue);

  if (bResult == TRUE)
  {
    printf("%d is Even number", iValue);
  }
  else
  {
    printf("%d is Odd number", iValue);
  }

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the number : 10
    Output: 10 is Even number
  Test case 2 :
    Input: Enter the number : 9
    Output: 9 is Odd number

*/