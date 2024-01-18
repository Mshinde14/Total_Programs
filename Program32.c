#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    //     1         2         3
    for(iCnt= 0; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");  //4
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number of times you want to print Jay Ganesh on Screen : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}