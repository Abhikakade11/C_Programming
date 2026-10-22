// Identify Character Type


#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheakCharacterType
// Input         : Character
// Output        : Character
// Descryption   : Cheak Character upparcase or lovercase in Digit
// Date          : 21/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if ((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("Uppercase Alphabet\n");
    }
    else if ((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("Lowercase Alphabet\n");
    }
    else if ((cValue >= '0') && (cValue <= '9'))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}
