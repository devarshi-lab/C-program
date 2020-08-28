#include<stdio.h>

int Gcd(int iValue1,int iValue2)
{
	int i = 0,iGcd = 0;
	if(iValue1<iValue2)
	{
		i = iValue1;
	}
	else
	{
		i = iValue2;
	}
	
	for(i = 1;i<=iValue1;i++)
	{
		if((iValue1 % i == 0) && (iValue2 % i== 0))
		{
			iGcd = i;
		}
	}

	return iGcd;
}
int main()
{
	int iFirst = 0,iSecond = 0;
	int iRet = 0;

	printf("Enter the two numbers : \n");
	scanf("%d%d",&iFirst,&iSecond);

	iRet = Gcd(iFirst,iSecond);

	printf("GCD of %d and %d is %d \n",iFirst,iSecond,iRet);

	return 0;
}