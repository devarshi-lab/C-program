//Application to open file.

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	char fname[20] = {'\0'};	//to store file name
	int fd = 0;					//file descriptor

	printf("Enter file name : \t");
	scanf("%s",fname);

	fd = open(fname,O_RDWR);		//file gets open in read and write mode
	
	if(fd == -1)
	{
		printf("ERROR : Unable to open file...");
	}
	else
	{
		printf("File opened successfully with File Descriptor : %d",fd);
	}

	close(fd);

	return 0;
}