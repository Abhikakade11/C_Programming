//Cheak whether a number is positive, negative or zero.


#include <stdio.h>
#include <stdlib.h>


typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Input         : Integer 
// Output        : Integer
// Descryption   : Cheak Number Positive or Negative or Zero
// Date          : 21/10/2026
// Author        : Abhijit Ganesh kakade
//
///////////////////////////////////////////////////////////////////

void CheckNumber(int ino)
{
    if (io > 0)
    {
        printf("Positive Number\n");
    }
    else if (iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Enter Zero\n");
    }
}

////////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
///////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
