#include<stdio.h>
void OddDisplay(int iNo)
{   int iCnt=0;
    while(iCnt<=iNo)
{
    if((iCnt%2) != 0)
    {
       printf("%d",iCnt);
    }
    iCnt++;
}
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    OddDisplay(iValue);
    return 0;
}
