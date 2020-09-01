/*
Accept one number form user nd check whether it is happy number or not.
Input: n = 19
Output: True
19 is Happy Number,
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
As we reached to 1, 19 is a Happy Number.

Input: n = 20
Output: False
*/

#include <stdio.h>

#define YES 1
#define NO 0

typedef int BOOL;

BOOL HappyNumber(int iValue)
{
	int i =0;
	int iSum = 0;
	int iDigit = 0;

	while(1)
	{
		iSum = 0;
		while(iValue != 0)
		{
			iDigit = iValue % 10;
			iSum += (iDigit*iDigit);
			iValue = iValue/10;
		}
		if(iSum == 1)
		{
			break;
		}
		if(iSum == 4)
		{
			break;
		}
		iValue = iSum;
	}

	if(iSum == 1)
	{
		return YES;
	}
	else
	{
		return NO;
	}
}

int main()
{
	int iNo = 0;
	BOOL bAns = NO;

	printf("Enyer the number : \t");
	scanf("%d",&iNo);

	bAns = HappyNumber(iNo);

	if(bAns == YES)
	{
		printf("It is a happy Number...\n");
	}
	else
	{
		printf("It is not a happy number...\n");
	}

	return 0;
}