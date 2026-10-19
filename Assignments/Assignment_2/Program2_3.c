// Accept one number from from user if number is less than 10 then print "Hello" other wise print "Demo".


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello...\n");
    }
    else
    {
        printf("Demo...\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);
    

    return EXIT_SUCCESS;
}