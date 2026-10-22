// Find the Greater of Two Numbers

#include <stdio.h>
#include <stdlib.h>


typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Input         : Integer, Interger
// Output        : Integer
// Descryption   : Cheak Number Greater or Equals
// Date          : 21/10/2026
// Author        : Abhijit Ganesh kakade
//
///////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if ((iFirst > iSecond))
    {
        printf("%d is Greater\n", iFirst);
    }
    else if ((iSecond > iFirst))
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
