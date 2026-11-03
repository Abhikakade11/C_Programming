#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE  1
#define FALSE 0

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckGreater
// Input         : Integer
// Output        : TRUE or FALSE
// Description   : Check whether number is greater than 100
// Date          : 04/11/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

BOOL CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Please enter number: ");
    scanf("%d", &iValue);

    bRet = CheckGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }

    return EXIT_SUCCESS;
}