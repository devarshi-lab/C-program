#include "header.h"

/*
    Function Name : DisplayConvert()
    Input : Char
    Output : BOOLEAN
    Description : print even factors of number 
    Author Name : Kanhaiya Pimpale
    Date : 31 July 2020
*/

BOOLEAN DisplayConvert(char cValue)
{
    if(cValue>='a' && cValue <='z')
    {
        return (cValue-32);
    }
    else if(cValue>='A' && cValue<='Z')
    {
        return (cValue+32);
    }
    else
    {
        return FALSE;
    }

    
}