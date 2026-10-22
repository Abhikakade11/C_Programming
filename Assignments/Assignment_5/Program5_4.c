// Check Divisibility by 3 and 5


#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheakMultipleDivisibility
// Input         : Integer
// Output        : Integer
// Descryption   : Cheak Divisible or not
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if (((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisible by Both\n");
    }
    else if (((iValue % 3) == 0))
    {
        printf("Divisible by 3 Only\n");
    }
    else if (((iValue % 5) == 0))
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

///////////////////////////////////////////////////////
//
// Entry Point Function Main
//
///////////////////////////////////////////////////////

int main(void)
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}
