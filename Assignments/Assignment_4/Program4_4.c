// Check Voting Eligibility

#include <stdio.h>
#include <stdlib.h>


typedef int BOOL;

///////////////////////////////////////////////////////////////////
//
// Function Name : CheakVotingEligibility
// Input         : Integer
// Output        : Integer
// Descryption   : Cheak you are Eligible or Not for Voting
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
     if ((iAge >= 18))
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

/////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
//////////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
