/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept a number from user and if number is less than 10 then print "Hello" otherwise print "Demo".
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in Integer format.

  We have to Print "Hello" if number is less than 10 otherwise print "Demo" on screen.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Check if number is less than 10 -> then print "Hello" if not -> print "Demo" on screen.
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
//  Descriptio  : It is used to Print "Hello" if given Integer is less than 10 otherwise print "Demo" on screen.
//  Input : Integer
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{

  if (iNo < 10)
  {
    printf("Hello");
  }
  else
  {
    printf("Demo");
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to accept a number from user and Print "Hello" if number is less than 10 otherwise print "Demo" on screen.
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
    Input: Enter the number : 9
    Output: Hello
  Test case 2 :
    Input: Enter the number : -5
    Output: Hello
  Test case 3 :
    Input: Enter the number : 10
    Output: Demo
  Test case 4 :
    Input: Enter the number : 12
    Output: Demo

*/