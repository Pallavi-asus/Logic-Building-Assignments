#include<stdio.h>
#include<stdbool.h>
bool ChkZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 0)
        {
            return true;
        }
    }


}
int main()
{
    int iValue=0;
    bool bRet=false;
    printf("Enter number");
    scanf("%d",&iValue);
    bRet=ChkZero(iValue);
    if(bRet==true)
    {
        printf("Your Number contains zero");

    }
    else
    {
        printf("Your Number doesn't contain zero");
    }
}