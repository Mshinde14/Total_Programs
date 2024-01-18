#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iCount = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo /10;
        while(iDigit == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    

    if(bRet == true)
    {
        printf("It contain Zero");
    }
    else
    {
        printf("It not contain Zero");
    }

    return 0;
}