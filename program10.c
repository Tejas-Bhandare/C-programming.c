/*
    Step1: Understand problem statement.
    Step2: Write the algorithm
    Step3: Decide the programming language.
    Step4: Write the program.
    Step5: Test the program.

      Problem statement:

      Write the program which use to perform ADDITION of two numbers.

*/

/*
  Step1: Understand problem statement.

  usere is going to enter the date in decimal format.
  If entered data is negative we have to convert it to positive value.
*/

/*
  Step2: Write the algorithm:

  START
    Accept first input.
    Accept second input.
    If any input is negative theen convert into positive .
    Perform ADDITION of that accepted valuse.
    Display the addition.

  STOP
*/

/*
  Step3: Decide the programming language.
  According to problem statement we select C programming
*/

/*
  Step4: Write the program.
*/

#include <stdio.h>
/////////////////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Descriptio  :   It is used to perform addition of two Float values.
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tejas Arun Bhandare
//  Date :          06/10/2024
//
/////////////////////////////////////////////////////////////////////////

float Addition(float fValue1, float fValue2)
{
  float fAdd = 0.0f; // Local variable for result

  // Updater
  if (fValue1 < 0.0f)
  {
    fValue1 = -fValue1;
  }
  if (fValue2 < 0.0f)
  {
    fValue2 = -fValue2;
  }

  fAdd = fValue1 + fValue2; // Buisiness Logic
  return fAdd;
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to perform addition  of two numbers
//
/////////////////////////////////////////////////////////////////////////
int main()
{
  float fNum1 = 0.0f, fNum2 = 0.0f, fSum = 0.0f; // Local variables for input

  printf("Enter first number : \n");
  scanf("%f", &fNum1);

  printf("Enter second number : \n");
  scanf("%f", &fNum2);

  fSum = Addition(fNum1, fNum2);

  printf("Addition of %f and %f is : %f\n", fNum1, fNum2, fSum);

  return 0;
}

/*
  Step5: Test the program.

  Testcase 1: 
  Enter first number :
  10.5
  Enter second number :
  45.2
  Addition of 10.500000 and 45.200001 is : 55.700001

  Testcase 2:
  Enter first number :
  -12.3
  Enter second number :
  20.0
  Addition of -12.300000 and 20.000000 is : 32.299999

  Testcase 3:
  Enter first number :
  10.0
  Enter second number :
  -20.0
  Addition of 10.000000 and -20.000000 is : 30.000000

  Testcase 4:
  Enter first number :
  -20.0
  Enter second number :
  -10.0
  Addition of -20.000000 and -10.000000 is : 30.000000
*/