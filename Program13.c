#include<stdio.h>
void DisplayClass(float fMarks)
{
    if((fMarks < 0.0) || (fMarks > 100))
    {
        printf("Invalid Input..\n");
    }
    else if((fMarks >= 0.00) && (fMarks < 35.00))
    {
        printf("You are fail..\n");
    }
    if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your class is Pass class..\n");
    }
    if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your class is Second class..\n");
    }
    if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is first class..\n");
    }
    if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your class is first class with Distinction..\n");
    }
}

int main()
{
    float fValue;

    printf("Enter the Percentage: \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}