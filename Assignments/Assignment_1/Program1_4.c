// Accept one number from user and cheak whether is divided by 5 or not 

#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;
#define True 1
#define False 0


BOOL Cheak(int iNo1)
{

    if((iNo1 % 5) == 0)
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

    bRet = Cheak(iValue);

    if(bRet == True)
    {
        printf("Divisible by 5 ");
    }
    else
    {
        printf("Not Divisible by 5 ");
    }

    return EXIT_SUCCESS;
}