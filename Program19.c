#include<stdio.h>

int DisplayGreater(int iNo1,int iNo2,int iNo3)
{
    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        return iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        return iNo2;
    }
    else 
    {
        return iNo3;
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;
    printf("Enter first Number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Second number : \n");
    scanf("%d",&iValue2);

    printf("Enter the Third number : \n");
    scanf("%d",&iValue3);

    iRet = DisplayGreater(iValue1,iValue2,iValue3);

    printf("Largest is : %d \n",iRet);

    return 0;
}