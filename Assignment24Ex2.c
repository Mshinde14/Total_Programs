#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bFlag = false;
    if((ch >= 'A') && (ch <= 'Z'))
    {
        bFlag = true;
    }
    else if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkCapital(cValue);
    
    if(bRet == true)
    {
        printf("Character is Capital\n");
    }
    else
    {
        printf("Charater is not Capital\n");
    }

    return 0;
}