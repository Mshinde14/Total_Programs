#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0;
    char ch1 = '\0';
    char ch2 = '\0';

    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
    {
        ch1 = 'A';
        ch2 = 'a';
        for(iCnt2 = 1; iCnt2 <= iCol; iCnt2++)
        {
            if((iCnt1 % 2) != 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
            }
            ch1++;
            ch2++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d",&iValue1);
    printf("Enter number of column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}