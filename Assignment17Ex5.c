#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iMul = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iMul = 2 * iCnt ;
        printf("%d\t",iMul);                              
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number of element : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}