#include<stdio.h>

double RectArea(float fHeight , float fWidth)
{

   float fArea;
   fArea= fWidth * fHeight;
   return fArea;
   
}
int main()
{
float fValue1= 0.0 , fValue2 = 0.0;
double dRet = 0.0;
printf("Enter Height ");
scanf("%f",&fValue1);

printf("Enter Width ");
scanf("%f",&fValue2);

dRet = RectArea(fValue1,fValue2);
printf("Area of Ractangle is: %f",dRet);
return 0;
}