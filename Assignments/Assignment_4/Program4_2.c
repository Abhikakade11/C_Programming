// Cheak Even or Odd Number

#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckEvenOdd
// Input         : Interger
// Output        : Integer
// Descryption   : check Number Even or Odd
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if (((iNo % 2) == 0))
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

//////////////////////////////////////////////////////////////////
//
//  Entry Point Function Main
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}
