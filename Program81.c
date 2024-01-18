#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of element you want to enter: \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamically memory gets aloocated Succesfully..");

    printf("Enter the Elements : \n");
    for(iCnt = 0; iCnt <iCount; iCnt++)
    {
        printf("\nEnter the elemet no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Minimum(ptr, iCount);
    printf("Minimum element is : %d\n",iRet);

    free(ptr);
    printf("Dynamic memory gets dealloacted succefully..\n");

    return 0;
}