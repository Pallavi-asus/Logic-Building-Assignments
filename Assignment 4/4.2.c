#include<stdio.h>


int FactRev(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo; //updater
    }
    for(iCnt=iNo/2;iCnt>=1;iCnt--)
    {
       if((iNo%iCnt)==0)
       {
        printf("%d\n",iCnt);
       }
       
    }   
}
int main()
{
    int iValue=0;
    

    printf("Enter Your Number");
    scanf("%d",&iValue);
  
    FactRev(iValue);
    
  
    return 0;
}
//TIME COMPLEXITY=O(N/2)