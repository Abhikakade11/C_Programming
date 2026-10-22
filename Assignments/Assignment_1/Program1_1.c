//Program to divide two numbers


#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Divide
// Input         : Integer ,Integer
// Descryption   : print Division
// Date          : 19/10/2026
// Author        : Abhijit Ganesh Kakade 
//
///////////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo1 == 2)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;

    return iAns;
   
}

//////////////////////////////////////////////////////////////
//
// Entry Point Function main
//
/////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1, iValue2);

    printf("Division is : %d",iRet);

    return EXIT_SUCCESS;
}
