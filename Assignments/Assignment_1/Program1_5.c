// Accept one number from from user and print that number of * on screen


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Accept
// Input         : Integer
// Descryption   : print * 
// Date          : 19/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        printf("*");
    }
}

//////////////////////////////////////////////////////////////////
//
// Entry Point Function main
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Accept(iValue);

    return EXIT_SUCCESS;
}
