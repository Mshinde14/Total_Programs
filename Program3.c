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

int main()
{
    int i, j, k;
    printf("Enter First Number: \n");
    scanf("%d",&i);

    printf("Enter First Number: \n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition : %d",k);

    return 0;
}