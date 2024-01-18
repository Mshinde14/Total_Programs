#include<stdio.h>

void Display(char ch)
{
    int i = 0;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++,ch++)
        {
            printf("%c\t",ch);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch; i >='a'; i--,ch--)
        {
            printf("%c\t",ch);
        }
    }
    else
    {
        printf("\n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}