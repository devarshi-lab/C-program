//application to open file and write data in that file.
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

	fd = open(fname,O_RDWR | O_CREAT,0777);
	
	if(fd == -1)
	{
		printf("ERROR : Unable to open file...");
	}
	else
	{
		printf("File opened successfully with File Descriptor : %d",fd);
	}

	printf("\nEnter the data u want to store in file : \n");
	scanf(" %[^'\n']s",data);

	length = strlen(data);

	ret = write(fd,data,length);

	if(ret == -1)
	{
		printf("ERROR : Unable to write the data in file\n");
	}
	else
	{
		printf("Data written successfully in File %s",fname);
	} 

	close(fd);

	return 0;
}