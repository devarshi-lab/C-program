//application to open file and read file and write data on console
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void DisplayFileData(char *name)
{
	int fd = 0;
	char data[100] = {'\0'};
	int ret = 0;

	fd = open(name,O_RDONLY);

	if(fd == -1)
	{
		printf("ERROR : Unable to open file\n");
		return;
	}

	while((ret = read(fd,data,100)) != 0)
	{
		write(1,data,ret);
	}
}

int main()
{
	char fname[50] = {'\0'};

	printf("Enter the file name : \t");
	scanf("%s",fname);

	DisplayFileData(fname);

	return 0;
}