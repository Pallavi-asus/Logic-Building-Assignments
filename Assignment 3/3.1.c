#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    else
    {
        int i;
        for(i=1;i<=iNo;i++)
        {
            printf("%d\n",i*2);
        }
    }
}
int main()
{
    int iValue=0;
    printf("Enter your Number\n ");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}