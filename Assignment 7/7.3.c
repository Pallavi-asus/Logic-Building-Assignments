#include<stdio.h>


int EvenFactorial(int iNo)
{
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    int iFact=1;
    
    for(iCnt=1;iCnt<=iNo;iCnt++)

    if((iCnt%2==0))
    {
        iFact=iFact*iCnt;
    }
  
    return iFact; 


   
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter Your Number");
    scanf("%d",&iValue);
  
    iRet =  EvenFactorial(iValue);
    printf(" EvenFactorial is %d\n",iRet);
  
    return 0;
}
//Time Complexity=O(N)