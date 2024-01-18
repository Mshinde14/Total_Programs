//Problem Statement: Accept two values from user and perform the addition.

//Step 1: understand the problem statement
//Conclusion : We must have to accept 2 integer and perform its addition.

//Step 2: Write the algorithm
/*
    START
        Accept first no from user and store it into no1
        Accept first no from user and store it into no2
        create one variable to store the the result namesd as Ans
        perform Addition of no1 and no2 Store the result in Ans
        Display the result from to the user.
    STOP
*/

//Step 3 : Decide the programming language(c/c++/Java/Python)
//We select the C Programming

//Step 4 : Write the program Using c


#include<stdio.h>

//Addition is a function which accept two parameter as integer and it return integer
int Addition(int iNo1, int iNo2)
{
    auto int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;

}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto int iAns = 0;

    printf("Enter First Number: \n");
    scanf("%d",&iValue1);

    printf("Enter First Number: \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1,iValue2);

    printf("Addition : %d",iAns);

    return 0;
}

//Step 5: Test the code
/*
TEST case 1:
input : 10 11
output: 21

TEST case 2:
input : 10 0
output: 10
TEST case 3:
input : 12 -6
output: 6

TEST case 4:
input : -6 -5
output: -11

*/