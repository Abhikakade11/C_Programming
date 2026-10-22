//Calculate Employee Bonus


#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : ClaculateBonus
// Input         : Float , Integer
// Output        : String Valid or Invalid
// Descryption   : Claculate a bonus of the year 
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (((fSalary <= 0) || (iYears < 0)))
    {
        printf("Invalid Input\n");
        return;
    }

    if ((iYears > 10))
    {
        fBonus = fSalary * 15.0f / 100.0f;
    }
    else if ((iYears >= 5))
    {
        fBonus = fSalary * 10.0f / 100.0f;
    }
    else
    {
        fBonus = fSalary * 5.0f / 100.0f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

//////////////////////////////////////////////////
//
// Entry point Function Main
//
///////////////////////////////////////////////////

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}
