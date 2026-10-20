//Cheak whether a number is positive, negative or zero.


#include <stdio.h>
#include <stdlib.h>

void CheckNumber(int ino)
{
    if (io > 0)
    {
        printf("Positive Number\n");
    }
    else if (iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Enter Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
