// Accept one number from from user and print that number of * on screen


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Output        : Integer
// Descryption   : print * 
// Date          : 19/10/2026
// Author        : Abhijit Ganesh kakade
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
        {
           iNo =- iNo;
        }

   while( iNo > 0)
    {
        printf("*");
        iNo--;
    }
}

//////////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
//////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
