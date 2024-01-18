#include<stdio.h>

int MultiDigits(int iNo)
{
    int iMultiplication = 1;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit != 0)
        {
            iMultiplication = iMultiplication * iDigit;
        }
    }
    return iMultiplication;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultiDigits(iValue);

    printf("%d",iRet);

    return 0;
}