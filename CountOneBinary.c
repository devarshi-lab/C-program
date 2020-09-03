#include<stdio.h>

int CountOneBinary(int iValue)
{
	int iRem = 0;
	int iCnt = 0;

	while(iValue != 0)
	{
		iRem = iValue % 2;
		iValue = iValue/2;
		if(iRem == 1)
		{
			iCnt++;
		}
	}

	return iCnt;
}
int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	iRet = CountOneBinary(iNo);

	printf("Number of 1 present in %d's binary are : %d",iNo,iRet);

	return 0;
}