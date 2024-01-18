//Problem Statements : Accept radius from user and calculate  the area of circle

//Step1 : Understand the problem staetment
//Conclusion : We are going to use the dormula as PI* R*R

/*
    START
        Accept radius from user and store into RADIUS

    END
*/

#include<stdio.h>
//#define PI 3.14

/////////////////////////////////////////////////////////////////
//
//  Function name : CalculationArea
//  Description :   It is used to calculate Area of circle
//  Input :         Float
//  Output :        Float
//  Author name :   Mangesh Prakash Shinde
//  Date :          10/02/2023
//
/////////////////////////////////////////////////////////////////
float CalculateArea(float fRadius)
{
    auto float fArea = 0.0f;
    auto const float PI = 3.14f;
    fArea = PI * fRadius *fRadius;

    return fArea; 
}
/////////////////////////////////////////////////////////////////
//
//Entry Point Function
//
/////////////////////////////////////////////////////////////////
int main()
{
    auto float fValue  = 0.0f;
    auto float fAns = 0.0f;
    printf("Enter the Radius : \n");
    scanf("%f",&fValue);

    fAns = CalculateArea(fValue);

    printf("Area Of Circle is : %f\n",fAns);

    return 0;
}