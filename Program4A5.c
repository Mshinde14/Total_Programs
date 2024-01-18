#include<stdio.h>

int Multiplication(int iNo1, int iNo2, int iNo3)
{
    int iAns = 0;

    if(iNo1 == 0)
    {
        iAns = iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iAns = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iAns = iNo1 * iNo2;
    }
    else if(iNo1 == 0 && iNo2 == 0)
    {
        iAns = iNo3;
    }
    else if(iNo2 == 0 && iNo3 == 0)
    {
        iAns = iNo1;
    }
    else if(iNo1 == 0 && iNo3 == 0)
    {
        iAns = iNo2;
    }
    else if(iNo1 != 0 && iNo2 != 0 && iNo3 != 0)
    {
        iAns = iNo1 * iNo2 * iNo3;
    }
   

    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter First Number : ");
    scanf("%d",&iValue1);
    printf("Enter Second Number : ");
    scanf("%d",&iValue2);
    printf("Enter Third Number : ");
    scanf("%d",&iValue3);

    iRet = Multiplication(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d",iRet);

    return 0;
}