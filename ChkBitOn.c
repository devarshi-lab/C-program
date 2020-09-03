#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkFourthBit(int iValue)
{
	int iRem = 0;
	int i=0;
	int arr[32] = {0};

	while(iValue != 0)
	{
		iRem = iValue % 2;
		iValue = iValue/2;
		if(i == 4)
		{
			break;
		}
		arr[i] = iRem;
		i++;
	}
	if(arr[3] == 1)
	{
		return TRUE;
	}

	return FALSE;
}
int main()
{
	int iNo = 0;
	BOOL bRet  = FALSE;

	printf("Enter the number : \t");
	scanf("%d",&iNo);

	bRet = ChkFourthBit(iNo);

	if(bRet == TRUE)
	{
		printf("Fourth bit is on...");
	}
	else
	{
		printf("Fourth bit is off...");
	}

	return 0;
}