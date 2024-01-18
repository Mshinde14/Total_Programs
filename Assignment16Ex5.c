#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iDigit = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int iCount = 0;
        iNo = Arr[iCnt];
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iCount = iCount + iDigit ;
        
        }
        printf("%d\t",iCount);
        
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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

    DigitsSum(ptr, iSize);
    

    free(ptr);
    printf("Dyanamic memory deallocate successfully...\n");

    return 0;
}
