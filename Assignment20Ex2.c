#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt1 = 0, iCnt2 = 0, iNo = 0;

    for(iCnt1 = 1, iNo = 1; iCnt1 <= iRow; iCnt1++)
    {
        for(iCnt2 = 1; iCnt2 <= iNo; iCnt2++, iNo++)
        {
            if(iNo > 10)
            {
                iNo = 1;
                break;
                
            }
            //printf("%d\n",iNo);
           if((iCnt1 % 2) != 0)
            {
                if((iNo % 2) == 0)
                {             
                    printf("%d\t",iNo);        
                }
            }
            if((iCnt1 % 2) == 0)
            {
                if((iNo % 2) != 0)
                {             
                    printf("%d\t",iNo);        
                }
            }
            
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows : \n");
    scanf("%d",&iValue1);
    printf("Enter number of column : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}