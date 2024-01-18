
#include<stdio.h>

int RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iAns = 0;

    if(iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return 0;
    }
    
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iAns = iAns + iCnt;
        }
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

    iRet = RangeDisplayEven(iValue1,iValue2);

    if(iRet != 0)
    {
        printf("Addition of Even number is : %d",iRet);
    }
    else
    {
        printf("Invalide Range");
    }

    return 0;
}
//time Complexity is : N