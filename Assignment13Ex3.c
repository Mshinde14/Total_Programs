#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt  < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            if((Arr[iCnt] % 5) == 0)
            {
                printf("%d\t",Arr[iCnt]);
            }
        }
        else
        {
            printf("there no such no divisible by 5\n");
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of element you want : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    printf("Dyanmically memory allocated successfully..\n");

    if(ptr == NULL)
    {
        printf("Unable to allocate memory..\n");
        return -1;
    }

    printf("Enter the Elements ..\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    EvenDisplay(ptr,iSize);

    free(ptr);
    printf("\nDynamic memory deallocate Succesfully...");

    return 0;
}