#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    while(iNo>iCnt)
    {
        printf("*");
        iCnt++;

    }
     iCnt=0;
    while(iNo>iCnt)
    {
        printf("##");
        iCnt++;

    }
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
