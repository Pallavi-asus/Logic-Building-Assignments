#include<stdio.h>


int FactorialDiff(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iFact1 = 1;
    int iFact2 = 1;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)

    if((iCnt%2 == 0))
    {
        iFact1=iFact1*iCnt;
    }
    else
    {
        iFact2=iFact2*iCnt;
    }

  
    return (iFact1 - iFact2); 


   
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter Your Number");
    scanf("%d",&iValue);
  
    iRet =  FactorialDiff(iValue);
    printf(" Factorial Difference is %d\n",iRet);
  
    return 0;
}
//Time Complexity=O(N)