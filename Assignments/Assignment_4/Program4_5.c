//Check Divisibility by 5


#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheakDivisibility
// Input         : Integer
// Output        : Integer
// Descryption   : Cheak Divisible or Not by 5
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CheckDivisibility(int iNo)
{
    if (((iNo % 5) == 0))
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
