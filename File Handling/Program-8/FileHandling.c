//Accept 2 file name from user and append the contents of one file into another .
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>


void AppendData(char *name1,char *name2)
{
	int fd1 = 0,fd2 = 0;
	char data[100] = {'\0'};
	int ret = 0;

	fd1 = open(name1,O_RDONLY,0777);
	fd2 = open(name2,O_WRONLY | O_APPEND | O_CREAT,0777);

	if(fd1 == -1 || fd2 == -1)
	{
		printf("ERROR : Unable to open file\n");
		return;
	}

	while((ret = read(fd1,data,100)) != 0)
	{
		write(fd2,data,ret);
	}

	printf("Data Successfully written in file '%s' from '%s\n",name2,name1);
	close(fd1);
	close(fd2);
}

int main()
{
	char fname1[50] = {'\0'};
	char fname2[50] = {'\0'};

	printf("Enter the file name which u want to copy : \t");
	scanf("%s",fname1);

	printf("Enter the file name where u want to copy data : \t");
	scanf(" %s",fname2);

	AppendData(fname1,fname2);

	return 0;
}