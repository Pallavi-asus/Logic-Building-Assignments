#include<stdio.h>
void MultipleDisplay(int iNo)
{   int iCnt=1;
    while(iCnt<=5)
{
    
    {
       printf("%d",iCnt*iNo);
    }
    iCnt++;
}
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    MultipleDisplay(iValue);
    return 0;
}
