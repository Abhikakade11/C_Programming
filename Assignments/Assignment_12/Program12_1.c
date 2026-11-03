#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Input         : Integer
// Output        : None
// Description   : Display digits of number in reverse order
// Date          : 02/11/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////



void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);

        iNo = iNo / 10;
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

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}