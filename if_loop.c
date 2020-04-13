#include<stdio.h>

//check even or odd
void oddeven()
{
	int n=0;
	printf("Enter a no. : \t");
	scanf("%d",&n);

	if(n>=0)	//nested if
	{
		if(n%2==0)
		{
			printf("%d is even \n",n);
		}
		else if(n%2!=0)
		{
			printf("%d is odd\n",n);
		}
		else
		{
			printf("No. is 0\n");
		}
	}
	else
	{
		printf("No. is negative\n");
	} 					//nested if ends
}

//check range between
void range()
{
	int a=0,b=0,c=0;
	printf("Enter 3 numbers : \t");
	scanf("%d%d%d",&a,&b,&c);

	if(a>b && a<c)	//two condtion using && operator.this should satisfy both condition to enter in loop
	{
		printf("%d is between %d and %d\n",a,b,c);
	}
}

//check whether digit or character
void check()
{
	char ch;
	printf("Enter a input : \t");
	scanf(" %c",&ch);
	
	//if-else if loop
	if((ch>='a' && ch <='z')||(ch>='A' && ch<='Z'))
	{
		printf("%c is character\n",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is digit\n",ch);
	}
	else
	{
		printf("It is symbol\n");
	}
}

//check year is leap or not
void leap()
{
	int year=0;
	printf("Enter a year :\t");
	scanf("%d",&year);

	if((year%4==0 && year%100!=0)||(year%400==0))
	{
		printf("%d is leap year\n",year);
	}
	else
	{
		printf("%d is not leap year\n",year);
	}
}

//check the quadrant
void quadrant()
{
	float x=0,y=0;
	printf("Enter x and y co-ordinates : \t");
	scanf("%f%f",&x,&y);

	if(x==0 && y==0)
	{
		printf("It is on origin\n");
	}
	else if(x>0 && y>0)
	{
		printf("It lies in first quadrant\n");
	}
	else if(x<0 && y>0)
	{
		printf("It lies in second quadrant\n");
	}
	else if(x<0 && y<0)
	{
		printf("It lies in third quadrant");
	}
	else if(x>0 && y<0)
	{
		printf("It lies in fourth quadrant\n");
	}
}

int main()
{
	int choice;
	do
	{
	printf("Menu\n");
	printf("1.Check Number is even or odd\n2.check no. is between to other nos.\n3.check entered input is character or digit\n4.check the year is leap or not\n5.check the point lies in which quadrant\n6.Exit\n\nEnter your choice : \t");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 : oddeven();
			 break;
		case 2 : range();
			 break;
		case 3 : check();
			 break;
		case 4 : leap();
			 break;
		case 5 : quadrant();
			 break;
		default : printf("Enter valid choice!\n");
	}
	}while(choice!=6);

	return 0;
}
