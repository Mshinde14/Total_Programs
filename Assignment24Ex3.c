#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    bool bFlag = false;
    if((ch >= '0') && (ch <= '9'))
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }
    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter a Character : \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);
    
    if(bRet == true)
    {
        printf("It is a Digit\n");
    }
    else
    {
        printf("It is not digit\n");
    }

    return 0;
}