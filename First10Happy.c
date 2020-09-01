/*
Display the first 10 Happy nUmbers.
19 is Happy Number,
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

Input: n = 20
Output: False
*/

#include <stdio.h>

void HappyNumber()
{
	int iValue = 1;
	int iCnt = 1;
	int iOriginal = 0;
	int iSum = 0;
	int iDigit = 0;

	printf("First 10 Happy numbers are : \n");

	while(iCnt <= 10)
	{
		iOriginal = iValue;
		while(1)
		{
			iSum = 0;
			while(iValue != 0)
			{
				iDigit = iValue % 10;
				iSum += (iDigit*iDigit);
				iValue = iValue/10;
			}
			if(iSum == 1 || iSum == 7)
			{
				printf("%d\n",iOriginal);
				iCnt++;
				break;
			}
			if(iSum == 4)
			{
				break;
			}
			iValue = iSum;
		}
		iValue = iOriginal+1;
	}

}

int main()
{
	HappyNumber();

	return 0;
}