#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalide Range");
    }
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d \t",iCnt);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first Number : ");
    scanf("%d",&iValue1);
    printf("Enter Second Number : ");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}
//time Complexity is : N