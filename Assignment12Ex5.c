#include<stdio.h>

int CountDiff(int iNo)
{
    int iCount = 0;
    int iCount1 = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;

        if((iDigit % 2) == 0)
        {
            iCount += iDigit;
        }
        if((iDigit % 2) != 0)
        {
            iCount1 += iDigit;
        }
    }
    return iCount - iCount1;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}