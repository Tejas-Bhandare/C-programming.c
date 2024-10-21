/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept a number from user and print even factors of that number on screen.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in Integer format.
  We have to print even factors of that number on screen.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Print even factors of that number on screen.
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
//  Function Name : DisplayEvenFactors
//  Description : It is used to Print even Integer factors of the given Integer on screen
//  Input : Integer
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void DisplayEvenFactors(int iNo)
{
  int iCnt = 0;
  // Updater for negative integers
  if (iNo < 0)
  {
    iNo = -iNo;
  }
  // Filter for Odd integers
  if (iNo % 2 != 0)
  {
    printf("Dont have even integer factors");
    return;
  }

  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if ((iNo % iCnt == 0) && (iCnt % 2 == 0))
    {
      printf("%d ", iCnt);
    }
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to accept a number from user and Print even factors of that number on screen.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  int iValue = 0;

  printf("Enter the number: ");
  scanf("%d", &iValue);

  DisplayFactors(iValue);

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the number : 10
    Output: 2 10
  Test case 2 :
    Input: Enter the number : -8
    Output: 2 4 8
  Test case 3 :
    Input: Enter the number : 9
    Output: Dont have even integer factors

*/