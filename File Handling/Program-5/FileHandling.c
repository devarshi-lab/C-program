//application to open file and read file
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	char fname[20] = {'\0'};	//to store file name
	char data[50] = {'\0'};
	int fd = 0;					//file descriptor
	int ret = 0,length = 0;

	printf("Enter file name : \t");
	scanf("%s",fname);

	fd = open(fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("ERROR : Unable to open file...");
		return -1;
	}
	else
	{
		printf("File opened successfully with File Descriptor : %d",fd);
	}

	ret = read(fd,data,50);

	if(ret == -1)
	{
		printf("ERROR : Unable to read the data in file\n");
	}
	else
	{
		printf("\nData read successfully from File %s",fname);
	} 

	printf("\nData from file is : %s",data);

	close(fd);

	return 0;
}