#include<stdio.h>


int main()
{
	int x=0,y=0,n=0,a=0;
	int sum=0;
	int i=0;
	printf("accept two integers x and y and print the sum of numbers between these two numbers(both inclusive)\n");
	printf("Enter starting nd ending number :\t");
	scanf("%d%d",&x,&y);
	
	for(i=x;i<=y;i++)
	{
		sum=sum+i;
	}

	printf("\nSum of numbers between %d and %d is : %d\n",x,y,sum);
	printf("*****************************************************\n");
	
	printf("program to compute x raise to n(x^n)\n");
	
	printf("enter x : \t");
	scanf("%d",&a);
	printf("\nEnter power(n) :\t");
	scanf("%d",&n);
	x=1;

	for(i=1;i<n;i++)
	{
		x=x*a;
	}
	
	printf("\nanswer is %d\n",x);
	printf("*****************************************************\n");

	printf("Program to display next n characters of accepted character\n");
	char ch='\0';
	printf("Enter a character : \t");
	scanf(" %c",&ch);
	printf("\nEnter n : \t");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%c\t",++ch);
		printf("\n");
	}
	
	printf("*****************************************************\n");
	printf("accept a no and count no. digits and print sum of the numbers\n");	
	
	printf("Enter a no. : \t");
	scanf("%d",&n);
	sum=0;

	for(i=n;i>0;i=i/10)
	{
		sum=sum+(i%10);
	}

	printf("Sum is %d\n",sum);
	printf("\n");
	
	
	return 0;
}
