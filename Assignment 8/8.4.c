#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCel;
    fCel = ( (fTemp-32) * (5.0/9.0) );
    return fCel;

   
}
int main()
{
float fValue = 0.0;
double dRet = 0.0;
printf("Enter temperature in Fahrenhiet");
scanf("%f",&fValue);
dRet = FhtoCs(fValue);
printf(" %.2f degree Celsius",dRet);
return 0;
}