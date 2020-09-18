#include<stdio.h>

/*
int add(i,j)
{
	while(j != 0)
	{
		temp = i & j;
		i = i ^ j;
		j = temp<<1;
	}

	return i;
}
*/
  
/*int add(int x, int y) 
{ 
    return printf("%*c%*c", x, '\r', y, '\r'); 
} */

/*int add(int x, int y) 
{ 
    return printf("%*c%*c", x, ' ', y, ' '); 
} */
   
int main() 
{ 
	int  i =0,j=0;
	printf("Enter two number : \t");
	scanf("%d%d",&i,&j);
    printf("Sum = %d", add(i, j)); 
    return 0; 
} 

int add(int a, int b) 
{
   const char *c=0;
   return &(&c[a])[b];
}
