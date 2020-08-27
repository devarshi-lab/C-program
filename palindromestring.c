#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL StrPalindromeX(char *arr)
{
	int i = 0,j = 0,k=0;

	while(arr[i] != '\0')
	{
		i++;
	}
	i--;
	k = i;			//4 3 2 1		

	
	while(j<=i)
	{
		if(arr[j] == arr[i])
		{
			k--;
		}
		i--;
		j++;
	}

	if(k == i)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	

}
int main()
{
	char str[30];
	BOOL bRet = FALSE;

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	bRet = StrPalindromeX(str);

	if(bRet == TRUE)
	{
		printf("It is palindrome ...");
	}
	else
	{
		printf("It is not...");
	}

	return 0;
}