#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckBit(int iNo)
{
    int iPos = 0,iRem = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iRem = iNo %2;
        iPos++;
        if(iPos == 4)
        {
            break;
        }
        iNo = iNo / 2;
    }
    if((iPos == 4) && (iRem == 1))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iNo = 0;
    BOOL bRet  = FALSE;

    printf("Enter the number : \t");
    scanf("%d",&iNo);

    bRet = CheckBit(iNo);

    if(bRet == TRUE)
    {
        printf("Fourth bit is on...");
    }
    else
    {
        printf("Fourth bit is off...");
    }

    return 0;
}