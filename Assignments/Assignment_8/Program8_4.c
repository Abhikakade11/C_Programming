
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Input         : Integer
// Description   : Display multiplication table of given number
// Date          : 30/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ",iNo * iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
// Description          : Accept number and display table
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Table(iValue);

    return EXIT_SUCCESS;
}
