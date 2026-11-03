#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckEqual
// Input         : Two Integers
// Output        : TRUE or FALSE
// Description   : Check whether two numbers are equal
// Date          : 04/11/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

BOOL CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
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
    int iValue1 = 0, iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Please enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = CheckEqual(iValue1, iValue2);

    if(bRet == TRUE)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return EXIT_SUCCESS;
}