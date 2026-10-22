//Calculate Shopping Discount


#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : ClaculateDiscount
// Input         : Float
// Output        : Float
// Descryption   : Cheak Discount Worth it or not to buy
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if ((fAmount < 0))
    {
        printf("Invalid Purchase Amount\n");
        return;
    }

    if ((fAmount < 1000))
    {
        fDiscount = 0.0f;
    }
    else if ((fAmount < 5000))
    {
        fDiscount = 10.0f;
    }
    else
    {
        fDiscount = 20.0f;
    }

    fFinalAmount = fAmount -
                   (fAmount * fDiscount / 100.0f);

    printf("Payable Amount = %.2f\n", fFinalAmount);
}

/////////////////////////////////////////////////////////
//
// Entry Point Finction Main
//
//////////////////////////////////////////////////////////

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}
