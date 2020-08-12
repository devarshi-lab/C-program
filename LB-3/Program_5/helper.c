#include "header.h"

/*
    Function Name : ChkVowel()
    Input : Char
    Output : BOOLEAN
    Description : check given character is vowel or not 
    Author Name : Kanhaiya Pimpale
    Date : 31 July 2020
*/

BOOLEAN ChkVowel(char cValue)
{
    if((cValue>='a' && cValue <='z') || (cValue>='A' && cValue<='Z'))
    {
        switch(cValue)
        {
            case 'a':case 'e':case 'i':case 'o':case 'u':
            case 'A':case 'E':case 'I':case 'O':case 'U': return TRUE;
            break;
            default : return FALSE;
        }
    }
}