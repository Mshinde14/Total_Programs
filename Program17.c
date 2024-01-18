#include<stdio.h>

int Minimum(int iValue1,int iValue2)    
{
    int iAns = 0;

    if(iValue1 < iValue2)
    {
        return iValue1;
    }
    else
    {
        return iValue2;
    }
}

int main()
{
    auto int iNo1 = 0;
    auto int iNo2 = 0;
    auto int iRet = 0;

    printf("Enter the first number : \n");
    scanf("%d",&iNo1);

    printf("Enter the Second number : \n");
    scanf("%d",&iNo2);

    iRet = Minimum(iNo1,iNo2);
    
    printf("Smallest number is : %d\n",iRet);
}