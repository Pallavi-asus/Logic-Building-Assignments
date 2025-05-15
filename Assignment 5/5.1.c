#include<stdio.h>
void Pattern(int iNo)
{
    while(iNo>0)
    {
        printf("$*");
        iNo--;

    }
}
int main()
{
    int iValue=0;
    printf("Enter number");
    scanf("%d",&iValue);
    Pattern(iValue);
    return 0;
}
