//Program to print 5 to 1 nimners on screen

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Descryption   : print 5 to 1 Number
// Date          : 19/10/2026
// Author        : Abhijit Ganesh kakade
//
//////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    for(i = 5; i >= 1; i--)
    {
        printf("%d", i);
    }
}
/////////////////////////////////////////////////////////////////
//
// Entry Point Function main
//
/////////////////////////////////////////////////////////////////

int main()
{
    Display();
    return EXIT_SUCCESS;
}
