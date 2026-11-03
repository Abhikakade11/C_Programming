
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Count
// Input         : Integer
// Output        : Integer
// Description   : Count digits which are less than 6
// Date          : 02/11/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////


int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < 6)
        {
            iCount++;
        }

        iNo = iNo / 10;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}