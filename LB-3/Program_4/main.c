// TODO : Accept one character from user and convert case of that character.

/*
ALGORITHM
    START
        Accept one character from user and store it in variable.
        If character is uppercase
            convert it to lowercase
        else if character is lowercase
            convert it to uppercase
    STOP
*/

#include "header.h"

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter the Character: \t");
    scanf("%c",&ch);


    cRet = DisplayConvert(ch);

    if( cRet == 0)
    {
        printf("Enter Valid Letter...!");
    }
    else
    {    
    printf("Changed letter is : %c\n",cRet);
    }

    return 0;
}

