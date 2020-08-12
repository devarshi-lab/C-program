#include "header.h"

/*
    Function Name : PrintEven()
    Input : Integer
    Output : Integers
    Description : print even numbers till number the user has entered
    Author Name : Kanhaiya Pimpale
    Date : 31 July 2020
*/

void PrintEven(int iValue)
{
    int iRet = 0;
    int i = 1;

    if(iValue<0)
    {
        iValue = -iValue;
    }
    

    while(iRet<iValue)
    {
        if(i % 2 == 0)
        {
            printf("%d\t",i);
            iRet++;
        }
        i++;
    }


}