#include<stdio.h>
#include<string.h>

void DisplayConvert(char cChar)
{
    char cResult;
    if(cChar >= 'a' && cChar <= 'z')
    {
        cChar = cChar - 32;
        printf("%c",cChar);
    }
    else if(cChar >= 'A' && cChar <= 'Z')
    {
        cChar = cChar + 32;
        printf("%c",cChar);
    }

}

int main()
{
    char cValue = '\0';
    
    printf("Enter a Character  : ");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}