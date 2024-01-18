#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    
    if(iNo < 0) //Updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = CheckPerfect(iValue);

    if(iRet == true)
    {
        printf("%d is Perfect no",iValue);
    }
    else
    {
        printf("%d is not Perfect no",iValue);

    }

    return 0;
}

//Time Complexity : O[N/2]