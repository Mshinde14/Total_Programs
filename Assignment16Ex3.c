#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[], int iLength)
{
    int iCnt = 0, iNo = Arr[0] ,iNo1 = Arr[0];
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo < Arr[iCnt])
        {
            iNo = Arr[iCnt];
        }
        if(iNo1 > Arr[iCnt])
        {
            iNo1 = Arr[iCnt];
        }
    }
    return iNo - iNo1;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter number if element : \n");
    scanf("%d",&iSize);;

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        return -1;
    }

    printf("Enter %d numbers\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Diffrence(ptr, iSize);
    printf("Diffrence number is : %d\n",iRet);

    free(ptr);
    printf("Dyanamic memory deallocate successfully...\n");

    return 0;
}