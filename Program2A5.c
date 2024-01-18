#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if (iNo > 100)
    {
        return true; 
    }
    else if(iNo < 100)
    {
        return false;
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet == true)
    {
        printf("%d is greater than 100",iValue);
    }
    else
    {
        printf("%d is Smaller than 100",iValue);
    }

    return 0;
}