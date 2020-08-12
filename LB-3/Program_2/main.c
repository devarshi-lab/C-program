// TODO : Write a program which accept number from user and print even factors of that number.


/*
ALGORITHM
    START
        Accept one number from user and store it in variable.
        Iterate one loop till that number and get the factors of that number.
        If factor is even
            print
        Otherwise
            do no print
    STOP
*/

#include "header.h"

int main()
{
    int iNo =0;

    printf("Enter the number : \t");
    scanf("%d",&iNo);

    if(iNo == 0 || iNo == 1)
    {
        printf("It doesn't have any factors.");
        return -1;
    }

    DisplayFactor(iNo);

    return 0;
}

