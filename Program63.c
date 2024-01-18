#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iCopy = iNo;
    int iDigit = 0, iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }
    return (iRev == iCopy);
   
}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CheckPallindrome(iValue);
    
    if(iRet == true)
    {
        printf("%d is a Pallindrome number\n",iValue);
    }
    else
    {
        printf("%d is not a Pallindrome number\n",iValue);
    }

    return 0;
}