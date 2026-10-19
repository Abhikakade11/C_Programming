// Accept one number from user and cheak whether number is even or odd.

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define True 1
#define False 0


BOOL CheakEven(int iNo1)
{

    if((iNo1 % 2) == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
   
}

int main()
{
    int iValue = 0;
    BOOL bRet = False;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheakEven(iValue);

    if(bRet == True)
    {
        printf("Even Number :\n");
    }
    else
    {
        printf("Odd Number :\n");
    }

    return EXIT_SUCCESS;
}