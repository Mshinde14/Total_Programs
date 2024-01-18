#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }
        else
        {
            printf("there no such number divisible by 3 & 5\n");
        }
    }
}

int main()
{
    int iSize, iCnt = 0;
    int *ptr = NULL;

    printf("Enter numbe of elment : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    printf("Dynamic memory allocated successfully...\n");

    printf("Enter Elements : ");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iSize);

    free(ptr);
    printf("Dynamic memory deallocate successfully...\n");
}