#include<stdio.h>


int DollarToINR(int iNo)
{
    {
    iNo=iNo*70;
    }
    return iNo;

   
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter number of  USD");
    scanf("%d",&iValue);
  
    iRet = DollarToINR(iValue);
    printf("Value in INR %d",iRet);
  
    return 0;
}