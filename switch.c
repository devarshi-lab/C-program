#include<stdio.h>

//check the character is vowel or not

void main()
{
	char ch='\0';
	printf("Enter a character : \t");
	scanf("%c",&ch);

	switch(ch)	//passing the character that user will enter
	{
		case 'a': 		//
		case 'e':		//
		case 'i':		//
		case 'o':		//
		case 'u':		//if u want to print same result to every condition then u just have to give case
		case 'A':		//
                case 'E':		//
                case 'I':		//
                case 'O':		//
                case 'U': printf("%c is vowel\n",ch);
			  break;
		default : printf("%c is consonent\n",ch);

	}
}


