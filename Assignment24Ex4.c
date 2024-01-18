#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char ch)
{
    bool bFlag = false;
    if((ch >= 'a') && (ch <= 'z'))
    {
        bFlag = true;
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        bFlag = false;
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

    bRet = ChkSmall(cValue);
    
    if(bRet == true)
    {
        printf("It is small Character\n");
    }
    else
    {
        printf("It is not small Character\n");
    }

    return 0;
}