
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Input         : Integer
// Output        : BOOL
// Description   : Check whether number contains zero or not
// Date          : 02/11/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return TRUE;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        iNo = iNo / 10;
    }

    return FALSE;
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

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return EXIT_SUCCESS;
}