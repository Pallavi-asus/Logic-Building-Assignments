#include<stdio.h>


int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=1;
    if(iNo<0)
    {
        iNo=-iNo; //updater
    }
    for(iCnt=1;iCnt<=iNo/2;iCnt++)
    {  if((iNo%iCnt==0))
        {
          iMult=iMult*iCnt;
        }
    }  
     return iMult; 
}
int main()
{
    int iValue=0;
    int iRet=0;
    

    printf("Enter Your Number");
    scanf("%d",&iValue);
  
    iRet = MultFact(iValue);
    printf(" %d",iRet);
    
  
    return 0;
}
//TIME COMPLEXITY=O(N/2)