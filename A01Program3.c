/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program print 5 to 1 numbers on screen
*/

/*
  Step1: Understand the problem statement

  We have to print 5 to 1 numbers on screen

*/

/*
  Step2: Write the algorithm.

    Start
      Print 5 to 1 numbers on scree
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
//  Descriptio  : It is used to print 5 to 1 Integers on screen.
//  Input : None
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void Display()
{
  int iCnt = 0;
  iCnt = 5;

  while (iCnt >= 1)
  {
    printf("%d ", iCnt);
    iCnt--;
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to print 5 to 1 numbers on screen.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  Display();

  return 0;
}

/*
  Step5: Test the program.

  Test case:
    Output: 5 4 3 2 1

*/