/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept a number and check whether it is divisible by 5 or not.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in Integer format.
  We have to check whether it is divisible by 5 or not.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Check input is divisible by 5
        if divisible -> Display "Divisible by 5"
        if not divisible -> Display "Not Divisible by 5"
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
//  Function Name : Check
//  Descriptio  : It is used to check whether the given Integer is divisible by 5 or not.
//  Input : Integer
//  Output : BOOL
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

BOOL Check(int iNo)
{
  if ((iNo % 5) == 0)
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
// This Application is used to print 5 to 1 numbers on screen.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue = 0;
  BOOL bResult = FALSE;

  printf("Enter the number :");
  scanf("%d", &iValue);

  bResult = Check(iValue);

  if (bResult == TRUE)
  {
    printf("%d is Divisible by 5", iValue);
  }
  else
  {
    printf("%d is not Divisible by 5", iValue);
  }

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the number :10
    Output: 10 is Divisible by 5
  Test case 2 :
    Input: Enter the number :12
    Output: 12 is not Divisible by 5

*/