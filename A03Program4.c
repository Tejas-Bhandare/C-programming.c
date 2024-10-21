/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept one character from user and convert case of that character and display on screen.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in character format.
  We have to convert case of that character and display on screen.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Convert case of that character and display on screen.
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
//  Function Name : DisplayConvertCase
//  Description : It is used to Convert case of that character and display on screen.
//  Input : Character
//  Output : Void
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

void DisplayConvertCase(char cValue)
{
  if (cValue >= 'A' && cValue <= 'Z')
  {
    cValue = cValue + 32;
    printf("%c ", cValue);
  }
  else if (cValue >= 'a' && cValue <= 'z')
  {
    cValue = cValue - 32;
    printf("%c ", cValue);
  }
}

/////////////////////////////////////////////////////////////////////////
//
// This Application is used to accept a character from user and Convert case of that character and display on screen.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  char cValue = '\0';

  printf("Enter the character: ");
  scanf("%c", &cValue);

  DisplayConvertCase(cValue);

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the character: d
    Output: D
  Test case 2 :
    Input: Enter the character: D
    Output: d

*/