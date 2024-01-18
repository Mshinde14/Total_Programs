#include<stdio.h>
#include<stdbool.h>

bool ChechSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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
    char ch = '\0';
    bool bRet = false;

    printf("Enter the Character : \n");
    scanf("%c",&ch);

    bRet = ChechSmall(ch);
    if(bRet == true)
    {
        printf("Its a Small letter\n");
    }
    else
    {
        printf("Its a not Small letter\n");
    }

}