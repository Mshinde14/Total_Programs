#include<stdio.h>
#include<stdbool.h>

void ChkDivision(char ch)
{
    if((ch == 'A')||(ch  == 'a'))
    {
        printf("Exam is at 7.00 AM");
    }
    else if((ch == 'B'||(ch  == 'b')))
    {
        printf("Exam is at 8.30 AM");
    }
    else if((ch == 'C'||(ch  == 'c')))
    {
        printf("Exam is at 9.20 AM");
    }
    else if((ch == 'D'||(ch  == 'd')))
    {
        printf("Exam is at 10.30 AM");
    }
    else
    {
        printf("Enter Correct Division");
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter a Division : \n");
    scanf("%c",&cValue);

    ChkDivision(cValue);

    return 0;
}