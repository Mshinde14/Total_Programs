#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if (iStandard == 1)
    {
        printf("Your exam is at 8 AM..\n");
    }
    else if (iStandard == 2)
    {
        printf("Your exam is at 9 AM..\n");
    }
    else if (iStandard == 3)
    {
        printf("Your exam is at 10 AM..\n");
    }
    else if (iStandard == 4)
    {
        printf("Your exam is at 11 AM..\n");
    }
    else if (iStandard == 5)
    {
        printf("Your exam is at 12 AM..\n");
    }
    else
    {
        printf("Invalid output..\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}