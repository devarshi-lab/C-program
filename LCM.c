#include<stdio.h>

int LCM(int iValue1,int iValue2)
{
	int iTemp = 0;

	if(iValue1<iValue2)
	{
		iTemp = iValue1;
	}
	else
	{
		iTemp = iValue2;
	}

	while(1)
	{
		if((iTemp % iValue1 == 0) && (iTemp % iValue2 == 0))
		{
			break;
		}
		iTemp++;
	}

	return iTemp;
}

int main()
{
	int iNo1 = 0,iNo2 = 0;
	int iRet = 0;


	printf("Enter two numbers : \n");
	scanf("%d%d",&iNo1,&iNo2);

	iRet = LCM(iNo1,iNo2);

	printf("LCM of %d and %d is %d",iNo1,iNo2,iRet);

	return 0;
}