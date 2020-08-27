#include<stdio.h>

void StrRevX(char *arr)
{
	int i = 0,j = 0;
	char temp = '\0';
	if(str == NULL)
	{
		return;
	}
	while(arr[i] != '\0')
	{
		i++;
	}
	i--;

	while(j<i)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i--;
		j++;
	}

}
int main()
{
	char str[30];

	printf("Enter the string : \t");
	scanf("%[^'\n']s",str);

	StrRevX(str);

	printf("Reversed string is : %s",str);

	return 0;
}