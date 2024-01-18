#include<stdio.h>
#include<stdlib.h>

int Diffrerence(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0, iSum1 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
    }
    return iSum - iSum1;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the Number of element you want : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    printf("Dynamic memory Allocated Succefully..\n"); 

    printf("\nEnter the Element : \n");
 
    if(ptr == NULL)
    {
        printf("Unable to allocate Memory");
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Diffrerence(ptr, iSize);
    printf("difference between Even and odd Numbers : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory deallocated Succesfully..\n");

    return 0;
}
