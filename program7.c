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
    If any input is negative then convert into positive .
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

float Addition(float fValue1, float fValue2)
{
  float fAdd = 0.0f;
  fAdd = fValue1 + fValue2;
  return fAdd;
}

int main()
{
  float fNum1 = 0.0f, fNum2 = 0.0f, fSum = 0.0f;

  printf("Enter first number : \n");
  scanf("%f", &fNum1);

  printf("Enter second number : \n");
  scanf("%f", &fNum2);

  fSum = Addition(fNum1, fNum2);

  printf("Addition of %f and %f is : %f\n", fNum1, fNum2, fSum);

  return 0;
}