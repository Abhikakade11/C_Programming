
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : TableRev
// Input         : Integer
// Description   : Display multiplication table in reverse order
// Date          : 30/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ",iNo * iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
// Description          : Accept number and display reverse table
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return EXIT_SUCCESS;
}
