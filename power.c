/*
	Accept one number and aother number as its power and Calculate the power of that number.

	Input: 3		input: 5	
	power : 2		power : 3
	output : 9		output : 125

*/

#include<stdio.h>

#define POWERNEG -2

int CalculatePower(int iValue,int power)
{
	int i = 0;
	int iNumber = iValue;
	if(iValue == 0)
	{
		return 0;
	}
	if(power == 0)
	{
		return 1;
	}
	if(power<0)
	{
		return POWERNEG; 
	}

	for(i = 1;i < power;i++)
	{
		iValue = iNumber*iValue;
	}

	return iValue;
}

int main()
{
	int iNo = 0;
	int iPower = 1;
	int iAnswer = 0;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	printf("Enter the power u want to calculate : \t");
	scanf("%d",&iPower);

	iAnswer = CalculatePower(iNo,iPower);

	if(iAnswer == POWERNEG)
	{
		printf("ERROR : Power cannot be less than 0...");
		return 0;
	}

	printf("Answer is %d",iAnswer);

	return 0;

}

