#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>		//if u are on windows O.S. (optional)

int main()
{
	int file = 0,ret = 0;
	char arr[] = "Marvellous";
	char brr[20] = {'\0'};

	file = creat("First.txt",0X777);		//7 = 4(read)+2(write)+1(execute) permissions
	if(file == -1)
	{
		printf("Unable to create file!\n");
	}
	else
	{
		printf("File created.");
	}

	ret = write(file,arr,10);		//to write into file
	if(ret == 0)
	{
		printf("Unable to write data\n");
	}

	lseek(file,0,SEEK_SET);			//to set cursor position

	ret = read(file,brr,10);		//to read the data from file

	printf("\ndata : %s\n",brr);

	close(file);

	return 0;
}