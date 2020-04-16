#include<stdio.h>
#include<time.h>

int main()
{
	int n=0,i=0;
	clock_t start,end;
	printf("Enter a no. :\t");
	scanf("%d",&n);
	start=clock();
	printf("The Factors are :\n");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
		}
	}

	end=clock();
	printf("time is %f\n",((double)(end-start))/CLOCKS_PER_SEC);

	return 0;
}
