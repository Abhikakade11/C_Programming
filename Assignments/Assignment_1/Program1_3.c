//Program to print 5 to 1 nimners on screen

#include<stdio.h>
#include<stdlib.h>

void Display()
{
    int i = 0;
    for(i = 5; i >= 1; i--)
    {
        printf("%d", i);
    }
}

int main()
{
    Display();
    return EXIT_SUCCESS;
}