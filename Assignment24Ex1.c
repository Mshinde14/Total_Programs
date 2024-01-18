#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    bool bFlag = false;
    if(((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = ChkAlpha(cValue);
    
    if(bRet == true)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not Character\n");
    }

    return 0;
}