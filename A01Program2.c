/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to print 5 times "Marvellous" on screen.
*/

/*
  Step1: Understand the problem statement

  We have print "Marvellous" string on screen 5 times
*/

/*
  Step2: Write the algorithm.

    Start
      Define for loop to display "Marvellous" String in screen 5 times.
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
//  Descriptio  : It is used to 5 times "Marvellous" string on screen.
//  Input : None
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void Display()
{
  int iCnt = 0;

  for (iCnt = 1; iCnt <= 5; iCnt++)
  {
    printf("Marvellous\n");
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to perform print 5 times "Marvellous" on screen.
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
    Marvellous
    Marvellous
    Marvellous
    Marvellous
    Marvellous

*/