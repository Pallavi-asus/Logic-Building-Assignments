#include<stdio.h>

int NonFact(int iNo)
{
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo; //updater
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
       if((iNo%iCnt) != 0)
       {
        printf("Non-factors are %d\n",iCnt);
       }
       
       
    }   
}
int main()
{
    int iValue=0;
    

    printf("Enter Your Number");
    scanf("%d",&iValue);
  
    NonFact(iValue);
    
  
    return 0;
}
//TIME COMPLEXITY=O(N)