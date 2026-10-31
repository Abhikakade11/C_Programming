
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer
// Description   : Display single digit number into word
// Date          : 30/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo > 9)
    {
        printf("Invalid Number\n");
        return;
    }

    switch(iNo)
    {
        case 0:
            printf("Zero\n");
            break;

        case 1:
            printf("One\n");
            break;

        case 2:
            printf("Two\n");
            break;

        case 3:
            printf("Three\n");
            break;

        case 4:
            printf("Four\n");
            break;

        case 5:
            printf("Five\n");
            break;

        case 6:
            printf("Six\n");
            break;

        case 7:
            printf("Seven\n");
            break;

        case 8:
            printf("Eight\n");
            break;

        case 9:
            printf("Nine\n");
            break;
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

    Display(iValue);

    return EXIT_SUCCESS;
}
