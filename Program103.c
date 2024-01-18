#include<stdio.h>

int RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    int iAns = 0;

    if(iStart > iEnd)
    {
        return 0;
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iAns = iAns + iCnt;
    }
    return iAns;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first Number : ");
    scanf("%d",&iValue1);
    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    iRet = RangeDisplay(iValue1,iValue2);

    if(iRet != 0)
    {
        printf("Addition is : %d",iRet);
    }
    else
    {
        printf("Invalide Range\n");
    }

    return 0;
}

//time Complexity is : N