#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : 0X%x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}