/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to divide two numbers
*/

/*
  Step1: Understand the problem statement

  We have hardcoded two numbers in integer format.
  We have to return Quotient from the division of two numbers
*/

/*
  Step2: Write the algorithm.

    Start
      Hard code two integer values for DIVISION
      Perform DIVISION of two values.
      Display Quotient from the DIVISION.
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
//  Function Name : Divide
//  Descriptio  : It is used to perform Division of two Integer values.
//  Input : Integer, Integer
//  Output : Integer
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
  int iAns = 0;

  if (iNo2 == 0)
  {
    return -1;
  }

  iAns = iNo1 / iNo2;

  return iAns;
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to perform DIVISION  of two numbers
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue1 = 15, iValue2 = 5;
  int iRet = 0;

  iRet = Divide(iValue1, iValue2);

  printf("Dvision is %d", iRet);

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input : Value1 = 15, Value2 = 5
    Output : Dvision is 3
  Test case 2 :
    Input : Value1 = 120, Value2 = 5
    Output :Dvision is 24
  Test case 3 :
    Input : Value1 = 15, Value2 = 0
    Output :Dvision is -1

*/