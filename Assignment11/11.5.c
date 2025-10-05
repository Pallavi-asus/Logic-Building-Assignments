///////////////////////////////////////////////////////
//
//  File name :     11.5.c
//  Description :   Accept Number from user and display number with 
//                  i/p-8
//                  o/p-2 4 6 8 10 12 14 16
//  Author :        Pallavi Sable
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iNo)   
{
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d",iCnt*2);

    }

}
int main()
{
    int iValue = 0;
    printf("Enter number of Elements");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}