///////////////////////////////////////////////////////
//
//  File name :     11.1.c
//  Description :   Accept Number from user and display Alphabatical pattern
//                  i/p-5
//                  o/p-ABCDE
//  Author :        Pallavi Sable
//  Date :          12/06/2025
//
///////////////////////////////////////////////////////
#include<stdio.h>
void Pattern(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iNo ; iCnt++)
    {
        printf("%c",'A' + iCnt);

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