///////////////////////////////////////////////////////
//
//  File name :     11.2.c
//  Description :   Accept Number from user and display reverse with #
//                  i/p-5
//                  o/p-5# 4# 3# 2# 1#
//  Author :        Pallavi Sable
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iNo)   
{
    int iCnt = 0;
    for(iCnt = iNo ; iCnt > 0 ; iCnt--)
    {
        printf("%d#",iCnt);

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