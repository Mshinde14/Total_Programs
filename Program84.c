#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);
    iRet = Frequency(ptr,iCount,iValue);

    printf("%d Occures %d times\n",iValue,iRet);

    free(ptr);
    printf("Dynamic memory gets dealloacted succefully..\n");

    return 0;
}