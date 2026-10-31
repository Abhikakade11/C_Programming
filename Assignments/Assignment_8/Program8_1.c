
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Input         : Integer
// Description   : Check whether number is Small, Medium or Large
// Date          : 30/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Number is 50 or 100\n");
    }
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
// Description          : Accept number from user
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}
