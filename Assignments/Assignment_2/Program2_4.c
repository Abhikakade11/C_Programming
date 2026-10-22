// Accept two number from user and display first number in  second number of times 


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Input         : Integer,Integer
// Descryption   : Accept two numbers from users and display first number in second number of times
// Date          : 19/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iNo < 0)
        {
           iNo =- iNo;
        }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }

}

/////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iCout = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Number :\n");
    scanf("%d",&iCout);

    Display(iValue,iCout);

    return EXIT_SUCCESS;
}
