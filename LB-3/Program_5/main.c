// TODO : Write a program which accept number from user and print even factors of that number.


/*
ALGORITHM
    START
        Accept one character from user and store it in variable.
        If character is vowel
            return TRUE
        Otherwise
            return FALSE
    STOP
*/

#include "header.h"

int main()
{
    char ch = '\0';
    BOOLEAN cRet = FALSE;

    printf("Enter the character : \t");
    scanf("%c",&ch);

    cRet = ChkVowel(ch);

    if( cRet == FALSE)
    {
        printf("It is not vowel");
    }
    else if( cRet == TRUE)
    {    
    printf("It is vowel\n");
    }
    else
    {
        printf("Enter valid input...!\n");
    }
    

    return 0;
}

