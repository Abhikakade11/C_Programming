
// EX
// Input 7
// Output 2 4 6 8 10 12 14

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Input         : Integer
// Descryption   : print that number of even numbers on screen 
// Date          : 19/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 0;

    if (iNo <= 0)
    {
        return;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iEven = iCnt * 2;
        printf("%d ",iEven);
    }
}

/////////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
/////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
