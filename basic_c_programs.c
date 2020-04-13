#include<stdio.h> //standard input output library
#define PI 3.14

//surface area of cylinder and volume

void cylinder() //defining function
{
	int r=0,h=0; 			//defining nd intializing radius nd height variable
	int area=0,volume=0;
	printf("Enter radius : \t");
	scanf("%d",&r);			//storing radius in r
	printf("Enter height : \t"); 
	scanf("%d",&h);			//storing height in h
	area=(2*PI*r*r)+(2*PI*r*h); 	//calulating area nd storing it in 'area' variable
	volume=PI*r*r*h;            	// calculating volume nd storing it in volune
	printf("Area of cylinder is : %d \n Volume of cylinder is : %d\n",area,volume); //printing result
}

//conversion of temperatures
void temperature()
{
	float temp=0; 
	float cel=0,kel=0;
	printf("Enter temperature in Fahrenheit :\t");
	scanf("%f",&temp);
	cel=(5*(temp-32))/9;
	kel=cel+273.15;
	printf("Temperature in celsius is %f \nTemperature in kelvin %f\n",cel,kel);
}

//printing perimeter nd area of ring
void ring()
{
	float r1=0,r2=0;		//outer radius = r1 and inner radius = r2
	float area=0,perimeter=0;
	printf("Enter outer radius nd inner radius of ring :  \t");
	scanf("%f%f",&r1,&r2);
	area=2*PI*(r1+r2);
	perimeter=PI*((r1*r1)-(r2*r2));
	printf("Area of ring is %f \nPerimeter of ring is %f\n",area,perimeter);
}

//arithmatic nd harmonic mean of two numbers
void arithmatic()
{
	int a=0,b=0;	//variable for accepting two nos.
	int AM=0,HM=0;	//AM=Arithmatic mean and HM=Harmonic mean
	printf("Enter two numbers : \t");
	scanf("%d%d",&a,&b);
	AM=(a+b)/2;
	HM=(a*b)/(a+b);
	printf("Arithmatic mean : %d \n Harmonic mean : %d\n",AM,HM);
}

//printing previous and next character
void prenext()
{
	char ch='C';
	//printf("Enter the character : \t");
	//scanf("%c",&ch);
	printf("Entered character is : %c\n",ch);
	printf("Previous character : %c\n",--ch);
	printf("Next character : %c\n",++ch);
}

//printing ASCII value of character
void ascii()
{
	char ch;
	printf("Enter the character : \t");
	scanf("%c",&ch);
	printf("ASCII value of %c is %d\n",ch,ch);
}

int main()
{
	int choice=0;
	do
	{
	printf("\nMENU\n");
	printf("1.Area nd volume of cylinder\n2.Conversion of temperature\n3.Area nd perimeter of ring\n4.Arithmatic and harmonic mean of 2 numbers\n5.Next and Previous character\n6.ASCII value of character\n7.Exit\n\nEnter Your Choice : \t");
	scanf("%d",&choice);
	
	switch(choice) //this will excute the function whichever choice we enter
	{
		case 1 :
			cylinder();
			break;
		case 2 : 
			temperature();
			break;
		case 3 :
			ring();
			break;
		case 4 :
			arithmatic();
			break;
		case 5 :
			prenext();
			break;
		case 6 :
			ascii();
			break;
		default :
			printf("Enter valid choice!\n");
	}
	}while(choice!=7); //do while will repeat the menu until we enter 7
	
	return 0;
}
