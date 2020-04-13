#include<stdio.h>
#include<math.h> //library of math functions

int main()
{
	float x1=0,x2=0,y1=0,y2=0;
	float area=0;
	printf("Enter first(x1,y1) co-ordinates :\t");
	scanf("%f%f",&x1,&y1);
	printf("second(x2,y2) co-ordinates :\t");
	scanf("%f%f",&x2,&y2);
	area=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));  //'sqrt' is math library function
	printf("Distance between this two co-ordinates is : %0.2f\n",area);
	
	return 0;
}
