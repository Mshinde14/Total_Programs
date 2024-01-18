#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet = false;

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter number of element : \n");
    scanf("%d",&iSize);

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Frequency(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is Present\n",iValue);
    }
    else
    {
        printf("%d is Not Present\n",iValue);
    }

    free(ptr);
}