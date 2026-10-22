//Check Triangle Validity


#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheakTriengle
// Input         : Integer , Integer, Integer
// Output        : Integer
// Descryption   : Find Triangle
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if (((iSide1 <= 0) || (iSide2 <= 0) || (iSide3 <= 0)))
    {
        printf("Invalid Triangle\n");
        return;
    }

    if ((iSide1 + iSide2 > iSide3) &&
        (iSide1 + iSide3 > iSide2) &&
        (iSide2 + iSide3 > iSide1))
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid Triangle\n");
    }
}

//////////////////////////////////////////////////
//
// Entry Point Funtion Main
//
//////////////////////////////////////////////////

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter three sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}
