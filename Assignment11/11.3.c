///////////////////////////////////////////////////////
//
//  File name :     11.3.c
//  Description :   Accept Number from user and display number with *
//                  i/p-4
//                  o/p-1*2*3*4*
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
        printf("%d*",iCnt);

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