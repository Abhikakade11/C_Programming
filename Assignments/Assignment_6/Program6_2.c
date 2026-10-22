//Check Admission Eligibility


#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheakAdmission
// Input         : Float ,Integer 
// Output        : Elegible or Not
// Descryption   : Cheak Marks and Age for Admission  
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if (((fMarks < 0)|| (fMarks > 100) || (iAge < 0)))
    {
        printf("Invalid Input\n");
        return;
    }

    if (((fMarks >= 60) && (iAge >= 17)))
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

/////////////////////////////////////////////////////////////
//
// Entry point Function Main
//
///////////////////////////////////////////////////////////////

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
