#include<stdio.h>

int KMtoMeter(int iNo)
{

   int iDist;
   iDist= iNo*1000;
   return iDist;
   
}
int main()
{
int iValue = 0.0;
int iRet = 0.0;
printf("Enter Distance(in KM)");
scanf("%d",&iValue);
iRet = KMtoMeter(iValue);
printf("%dm",iRet);
return 0;
}