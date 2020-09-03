#include<stdio.h>

void DisplayBinary(int iValue)
{
	int iRem = 0;
	int i=0;
	int arr[32];

	while(iValue != 0)
	{
		iRem = iValue % 2;
		iValue = iValue/2;
		arr[i] = iRem;
		i++;
	}
	i--;
	while(i >= 0)
	{
		printf("%d",arr[i]);
		i--;
	}
}
int main()
{
	int iNo = 0;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	DisplayBinary(iNo);

	return 0;
}