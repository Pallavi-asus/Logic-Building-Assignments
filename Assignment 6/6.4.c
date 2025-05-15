#include<stdio.h>
void Table(int iNo)
{
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    int iCnt=1;
    while(iCnt<=10)
    {
        printf("%d\n",iCnt*iNo);
        iCnt++;
    }
    
}
int main()
{
    int iValue=0;
    

    printf("Enter Your Number");
    scanf("%d",&iValue);
  
    Table(iValue);
   
  
    return 0;
}