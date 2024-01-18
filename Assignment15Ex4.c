#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;
    int iCnt1 = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
            {
                printf("%d\t",Arr[iCnt]);
            }
        }
    }
    
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iValue1 = 0;
    int *ptr = NULL;

    printf("Enter number of element : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    } 

    printf("Enter First number : \n");
    scanf("%d",&iValue);
    printf("Enter Second number : \n");
    scanf("%d",&iValue1);

    printf("Enter %d elements\n",iSize);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Range(ptr, iSize, iValue, iValue1);

    free(ptr);

    return 0;
    
}