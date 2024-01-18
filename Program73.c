#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iAns = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        iAns = iAns * iCnt;    
    }
    return iAns;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factoria;l of given number is : %d",iRet);

    return 0;
}