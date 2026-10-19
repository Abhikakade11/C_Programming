// Accept two number from user and display first number in  second number of times 


#include<stdio.h>
#include<stdlib.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iNo < 0)
        {
           iNo =- iNo;
        }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }

}

int main()
{
    int iValue = 0;
    int iCout = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Number :\n");
    scanf("%d",&iCout);

    Display(iValue,iCout);

    return EXIT_SUCCESS;
}