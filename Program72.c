#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter the number of elemets that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated succesfully for %d elements \n",iCount);
    printf("Enter the %d Values : \n",iCount);

    for(iCnt = 0; iCnt < iCount; iCnt++)
    {
        printf("\n Enter the elemet no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = EvenCount(ptr, iCount);
    printf("Even elements are : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated successfully...");

    return 0;
}