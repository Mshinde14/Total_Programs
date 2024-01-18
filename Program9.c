#include<stdio.h>
long int Cube(int iValue)
{
    auto long int iRet = 0;
    iRet = iValue * iValue * iValue;

    return iRet;
}

int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter the Number : ");
    scanf("%d",&iNo);

    iAns = Cube(iNo);

    printf("Cube is :%ld\n",iAns);


    return 0;
}