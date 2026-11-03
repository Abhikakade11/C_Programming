#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Percentage
// Input         : Total Marks and Obtained Marks
// Output        : Percentage
// Description   : Calculate percentage of obtained marks
// Date          : 04/11/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0;

    if(iTotal == 0)
    {
        return 0.0;
    }

    fPer = ((float)iObtained / iTotal) * 100;

    return fPer;
}

///////////////////////////////////////////////////////////////////
//
// Entry Point Function : main
//
///////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks: ");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is: %.1f%%\n", fRet);

    return EXIT_SUCCESS;
}