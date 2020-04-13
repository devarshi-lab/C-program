//A cashier has currency notes of denomination 1,5 and 10. accept the amount to be withdrawn from the user and print the total number of currency notes of each denomination the cashier will have to give.

#include<stdio.h>

int main()
{
	int amount=0,ten=0,remain=0,five=0,one=0;	
	printf("Enter the amount to be withdrawn : \t");
	scanf("%d",&amount);
	ten=amount/10;
	remain=amount%10;
	five=remain/5;
	one=remain%5;
	printf("10 rupees notes will be : %d\n",ten);
	printf("5 rupees notes will be : %d\n",five);
	printf("1 rupees notes will be : %d\n",one);

	return 0;
} 
