#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter %d element\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = Check(ptr, iSize);

    if(bRet == true)
    {
        printf("11 is Present\n");
    }
    else
    {
        printf("11 is Absent\n");
    }

    free(ptr);
    printf("\nDynamic memory deallocate successfully");

    return 0;
}