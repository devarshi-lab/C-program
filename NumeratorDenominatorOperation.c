/*
Accept two fraction(numerator and denominator) and perform the following operations till the use
select exit.
1.Addition
2.Subtraction
3.Multiplication
4.Exit
*/

#include<stdio.h>

void Addition(float num1,float den1,float num2,float den2)
{
	float iAns = 0.0;
	if(den1 == den2)
	{
		iAns = num1+num2;
		if(iAns == den2)
		{
			printf("Addition is : %0.2f\n",iAns/den2);
			return;
		}
		printf("Addition is : %0.2f/%0.2f \n",iAns,den2);
		return;
	}
	else
	{
		iAns = (num1*den2)+(num2*den1);
		printf("Addition is : %0.2f/%0.2f \n",iAns,(den1*den2));
		return;
	}

}
void Subtraction(float num1,float den1,float num2,float den2)
{
	float iAns = 0.0;
	if(den1 == den2)
	{
		iAns = num1-num2;
		if(iAns == den2)
		{
			printf("Subtraction is : %0.2f\n",iAns/den2);
			return;
		}
		printf("Subtraction is : %0.2f/%0.2f\n",iAns,den2);
		return;
	}
	else
	{
		iAns = (num1*den2)-(num2*den1);
		printf("Subtraction is : %0.2f/%0.2f \n",iAns,(den1*den2));
		return;
	}

}
void Multiplication(float num1,float den1,float num2,float den2)
{
	float iAns = 0.0;

	printf("Multiplication is : %0.2f/%0.2f \n",(num1*num2),(den1*den2));
	return;

}
int main(void)
{
	float iNum1 = 0.0;
	float iDen1 = 0.0;
	float iNum2 = 0.0;
	float iDen2 = 0.0;
	int choice = 0;

	printf("Enter first fraction and numerator in (num/den) format : \t");
	scanf("%f/%f",&iNum1,&iDen1);

	printf("Enter second fraction and numerator in (num/den) format : \t");
	scanf("%f/%f",&iNum2,&iDen2);


	do
	{
		printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Exit\n");
		printf("Enter your choice : \t");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1: Addition(iNum1,iDen1,iNum2,iDen2);
					break;
			case 2: Subtraction(iNum1,iDen1,iNum2,iDen2);
					break;
			case 3: Multiplication(iNum1,iDen1,iNum2,iDen2);
					break;
			default : printf("Enter a valid choice!!!");

		}
	}while(choice!=4);

	return 0;
}