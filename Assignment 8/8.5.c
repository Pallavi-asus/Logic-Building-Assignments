#include<stdio.h>

double SquareMeter(int iNo)
{

   double dSM;
   dSM= iNo * 0.0929;
   return dSM;
   
}
int main()
{
int iValue = 0.;
double dRet = 0.0;
printf("Enter area in Squarefeet");
scanf("%d",&iValue);
dRet = SquareMeter(iValue);
printf("%.4f square meter",dRet);
return 0;
}