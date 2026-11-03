#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : main
// Input         : Name
// Output        : Display Name
// Description   : Accept and display full name
// Date          : 04/11/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
//
///////////////////////////////////////////////////////////////////
int main()
{
    char Name[30];

    printf("Please enter full name: ");
    scanf("%29[^\n]", Name);

    printf("Your name is %s\n", Name);

    return EXIT_SUCCESS;
}