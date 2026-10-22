// Accept one number from from user and print that number of * on screen


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Descryption   : print that number of * on screen 
// Date          : 19/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

     if(iNo < 0)
        {
           iNo =- iNo;
        }

    while( iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}

////////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    

    return EXIT_SUCCESS;
}
