/*
  Step1: Understand the problem statement.
  Step2: Write the algorithm.
  Step3: Decide the programming language.
  Step4: Write the program.
  Step5: Test the program.

  Problem Statement :

  Write the program to accept one character from user and check whether that character is vowel (a,e,i,o,u) or not.
*/

/*
  Step1: Understand the problem statement

  User is going to enter the data in character format.
  We have to check whether that character is vowel (a,e,i,o,u) or not.

*/

/*
  Step2: Write the algorithm.

    Start
      Accept the input from user
      Convert charcter to lowercase
      Check whether that character is vowel (a,e,i,o,u) or not.
      Display result
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
//  Function Name : CheckVowel
//  Description : It is used to check whether that character is vowel (a,e,i,o,u) or not.
//  Input : Character
//  Output : BOOL
//  Author : Tejas Arun Bhandare
//  Date : 21/10/2024
//
/////////////////////////////////////////////////////////////////////////

BOOL CheckVowel(char cValue)
{
  // Updator for Uppercase characters
  if (cValue >= 'A' && cValue <= 'Z')
  {
    cValue = cValue + 32;
  }
  if (cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
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
// This Application is used to accept a character from user and check whether that character is vowel (a,e,i,o,u) or not.
//
/////////////////////////////////////////////////////////////////////////

int main()
{
  char cValue = '\0';
  BOOL bResult = FALSE;

  printf("Enter the character: ");
  scanf("%c", &cValue);

  bResult = CheckVowel(cValue);

  if (bResult == TRUE)
  {
    printf("%c is a Vowel", cValue);
  }
  else
  {
    printf("%c is not a Vowel", cValue);
  }

  return 0;
}

/*
  Step5: Test the program.

  Test case 1 :
    Input: Enter the character: a
    Output: a is a Vowel
  Test case 2 :
    Input: Enter the character: A
    Output: A is a Vowel
  Test case 3 :
    Input: Enter the character: h
    Output: h is not a Vowel

*/