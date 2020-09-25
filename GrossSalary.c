/*
A computer manufacturing company has the following monthly compensation policy to their sales-
persons:
Minimum base salary
: 1500.00
Bonus for every computer sold
: 200.00
Commission on the total monthly sales : 2 per cent
Since the prices of computers are changing, the sales price of each computer is fixed at the
beginning of every month
Given the base salary, bonus, and commission rate, the inputs necessary to calculate the gross
salary are, the price of each computer and the number sold during the month.
The gross salary is given by the equation :
Gross salary =
base salary + (quantity * bonus rate)
+ (quantity * Price) * commission rate
*/

#include<stdio.h>
#include<stdlib.h>

float CalcGrossSalary(int no,float price)
{
	float iRet = 0;

	printf("Bonus : %d\n",(no*200));
	printf("Commission : %0.2f\n",(no*price*0.02));

	iRet = 1500 + (no*200) + (no*price*(0.02));

	return iRet;
}
int main()
{
	int comp_sold = 0,i = 0;
	float GrossSalary = 0.0,comp_price = 0.0;

	printf("Enter the number of computers sales person sold : \t");
	scanf("%d",&comp_sold);

	printf("Enter the price at which he sold computers : \t");
	scanf("%f",&comp_price);

	GrossSalary = CalcGrossSalary(comp_sold,comp_price);

	printf("Gross salary : %0.2f",GrossSalary);

	return 0;

}