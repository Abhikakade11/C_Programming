
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Input         : Charcter
// Descryption   : convert case of that character
// Date          : 20/10/2026
// Author        : Abhijit Ganesh kakade
//
///////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c", CValue - 32);
    }
    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c", CValue + 32);
    }
}

///////////////////////////////////////////////////////////////
//
// Entry Point Function Main
//
///////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}
