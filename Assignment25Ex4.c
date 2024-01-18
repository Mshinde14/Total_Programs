#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bFlag = false;
    if((ch == '!') || (ch == '@') || (ch == '#') ||(ch == '$') ||(ch == '%') || (ch == '^') ||(ch == '&') ||(ch == '*') )
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

    printf("Enter  a character\n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
    
    if(bRet == true)
    {
        printf("It is special symbol\n");
    }
    else
    {
        printf("It is not special symbol\n");
    }

    return 0;
}