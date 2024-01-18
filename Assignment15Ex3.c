#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iCount = 0;
    for(iCnt = 0; iCnt > iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
        else
        {
            return -1;
        }
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter number of element : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = LastOcc(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such number\n");
    }
    else
    {
        printf("%d\n",iRet);
    }

    free(ptr);

    return 0;
}