#include<stdio.h>
void TableRev(int iNo)
{
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    iCnt=10;
    while(iCnt>0)
    {
        printf("%d\n",iCnt*iNo);
        iCnt--;
    }
    
}
int main()
{
    int iValue=0;
    

    printf("Enter Your Number");
    scanf("%d",&iValue);
  
    TableRev(iValue);
   
  
    return 0;
}