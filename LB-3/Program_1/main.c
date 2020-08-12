// TODO : Write a program which accept one number from user and print that number of even numbers on screen.

/*
ALGORITHM
    START
        Accept one number from user and store it in variable.
        Iterate one loop till that number and print even number till that number
        Display the even numbers on screen
    STOP
*/

#include "header.h"

int main()
{
    int iNo = 0;

    printf("Enter the number : \t");
    scanf("%d",&iNo);

    if(iNo == 0)
    {
        printf("Enter valid number!...");
    }

    PrintEven(iNo);

    return 0;
}
