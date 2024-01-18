#include<stdio.h>

float Average(int iNo1,int iNo2,int iNo3)
{
    float fAns = 0.0f;
    fAns = ((float)(iNo1 + iNo2 + iNo3) / 3);
    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    float fRet = 0.0f;
    printf("Enter first Number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Second number : \n");
    scanf("%d",&iValue2);

    printf("Enter the Third number : \n");
    scanf("%d",&iValue3);

    fRet = Average(iValue1,iValue2,iValue3);

    printf("Average is : %f\n",fRet);

    return 0;
}