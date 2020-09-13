#include<stdio.h>

int main()
{
	FILE *fp1,*fp2;
	char ch;
	char st = 'a';

	fp1 = fopen("Demo.txt","w");
	fp2 = fopen("Filereadlib.c","r");

	while((ch=fgetc(fp2))!=EOF)
	{
		fputc(ch,fp1);
	}

	printf("Success");	

	return 0;
}
