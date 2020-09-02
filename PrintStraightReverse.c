#include <stdio.h>

void PrintStraightReverse(int iValue)
{
	int i =0,j=0;
	for(i=iValue,j = 1;i>0 || j<=iValue;i--)
	{	
		if(i > 0)
		{
			printf("%d\t",i);
		}
		else if(i == 0)
		{
			printf("%d\t",j);
			j++;
			i++;
		}
	}
}
int main()
{
	int iNo = 0;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	PrintStraightReverse(iNo);
	return 0;
}