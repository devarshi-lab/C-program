#include<stdio.h>

//accepts n and print sum of first n numbers
//while loop
void add()
{
	int n=0;
	int sum=0;
	printf("Enter a no.:\t");
	scanf("%d",&n);

	while(n>0)
	{
		sum=sum+n;
		n--;
	}

	printf("Sum is %d",sum);
}
//write program that accepts +ve nos and prints sum of that nos.
//do-while loop
void sum()
{
	int a=0;
	int sum=0;
	printf("Enter a No. :\n");
	do		//do loop starts execution here
	{
		scanf("%d",&a);
		sum=sum+a;
	}while(a>=0);	//it will continue executing till we enter value of a -ve.

	printf("Sum is %d\n",sum);
}

//accept n and display its table
//for loop
void table()
{
	int n=0;
	int i=0;
	printf("Enter a no. :\t");
	scanf("%d",&n);

	for(i=1;i<=10;i++)	//it will work till i<10 
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}

int main()
{
	int c=0;
	do
	{
	printf("\nMain\n");
	printf("1.While loop\n2.do-while loop\n3.For loop\n4.Exit\n\nEnter your choice : \t");
	scanf("%d",&c);

	switch(c)
	{
		case 1 : add();
			 break;
		case 2 : sum();
			 break;
		case 3 : table();
			 break;
		default : printf("Enter a valid choice !!!\n");
	
	}
	}while(c!=4);

	return 0;
}

