#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iAns = 1;
    int iAns2 = 1;
    int iAns3 = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iAns = iAns * iCnt;
        }     
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iAns2 = iAns2 * iCnt;
        }     
    }

    iAns3 = iAns -iAns2;
    return iAns3;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Difference is : %d",iRet);

    return 0;
}