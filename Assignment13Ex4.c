#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 3) == 0 )
            if((Arr[iCnt] % 5)==0)    
            {
                printf("%d\t",Arr[iCnt]);
            }
    }
    printf("\n");
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

    printf("Enter the Numbers..\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iSize);

    free(ptr);
    printf("Dynamic memory deallocate Successfully...\n");

    return 0;
}


