#include<stdio.h>

int main()
{
	int a=0,b=0,temp=0; 
	printf("Enter first no. :\t");
	scanf("%d",&a);
	printf("\v Enter second no. \t");
	scanf("%d",&b);
	printf("\n Before swapping nos. are %d  %d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After Swapping nos. are %d %d\n",a,b);

	return 0;
}

