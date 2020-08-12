#include "header.h"

/*
    Function Name : DisplayFactor()
    Input : Integer
    Output : Integers
    Description : print even factors of number 
    Author Name : Kanhaiya Pimpale
    Date : 31 July 2020
*/

void DisplayFactor(int iValue)
{
    int iRet = 0;
    int i = 1;
    int flag = 0;

    if(iValue<0)
    {
        iValue = -iValue;
    }
    for(iRet = 1; iRet <= iValue/2; iRet++)
    {
        if(iValue % iRet == 0)
        {
            if(iRet % 2 == 0)
            {
                printf("%d\t",iRet);
                flag = 1;
            }            
        }
    }
    if(flag == 0)
    {
        printf("It don't have any even factors");
    }

}