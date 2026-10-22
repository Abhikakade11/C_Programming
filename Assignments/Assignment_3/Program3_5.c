
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : CheckVowel
// Input         : Charcter
// Output        : Boolean
// Descryption   : check is vowel or not 
// Date          : 20/10/2026
// Author        : Abhijit Ganesh Kakade
//
///////////////////////////////////////////////////////////////////

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' ||
       cValue == 'i' || cValue == 'o' ||
       cValue == 'u' || cValue == 'A' ||
       cValue == 'E' || cValue == 'I' ||
       cValue == 'O' || cValue == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

/////////////////////////////////////////////////////////
//
// Entry Point FUnction Main
//
/////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf(" %c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It is not Vowel");
    }

    return EXIT_SUCCESS;
}
