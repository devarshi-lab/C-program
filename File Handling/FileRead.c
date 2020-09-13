#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	int File = 0;
	int ret = 0;
	char buffer[1024] = {'\0'};

	File = open("Demo.txt",O_RDONLY);

	if(File == -1)
	{
		printf("Unable to open file ...");
	}

	while((ret = read(File,buffer,sizeof(buffer))) != 0)
	{
		printf("%s",buffer);

	}
	return 0;
}