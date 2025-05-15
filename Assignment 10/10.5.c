#include<stdio.h>

int CountDiff(int iNo)
{
    int iSum1 = 0;
    int iSum2 = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if( (iDigit % 2 == 0))
        {
            iSum1 = iSum1 + iDigit; 
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        }
        
        iNo = iNo / 10;
    }
    return (iSum1 - iSum2);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}