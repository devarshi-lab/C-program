#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE,*PNODE,**PPNODE;


void Push(PPNODE Head,int value)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn->data=value;
	newn->next=NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		*Head = newn;
	}
}

int Pop(PPNODE Head)
{
	PNODE temp = *Head;
	int no = 0;
	if(*Head == NULL)
	{
		printf("\n_____________________________\n");
		printf("Stack is empty");
		return -1;
	}
	else
	{
		no = (*Head)->data;
		*Head = (*Head)->next;
		free(temp);
		return no;
	}

}

void Display(PNODE Head)
{
	if(Head == NULL)
	{
		return;
	}
	
	printf("\n_____________________________\n\n");
	while(Head != NULL)
	{
		printf("\n|%d|",Head->data);
		Head = Head->next;
	}
	printf("\n_____________________________\n");
	
}

int Count(PNODE Head)
{
	int iCnt = 0;
	if(Head == NULL)
	{
		return 0;
	}
	while(Head != NULL)
	{
		iCnt++;
		Head = Head->next;
	}
	return iCnt;
}


int main()
{
	PNODE First = NULL;
	int no = 0,choice = 1;

	while(choice)
	{
		printf("\n1.PUSH\n2.POP\n3.Display\n4.Count\n0.Exit\n");
		printf("Enter your choice:\t");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1 :
					printf("\nEnter the number u want to push : \t");
					scanf("%d",&no);
					Push(&First,no);
					break;
			case 2 :
					no = Pop(&First);
					printf("Popped elements is : %d",no);
					printf("\n_____________________________\n");
					break;
			case 3 :
					Display(First);
					break;
			case 4 :
					printf("\n_____________________________\n");
					printf("Number of elements present in stack is : %d",Count(First));
					printf("\n_____________________________\n");
					break;
			case 0 :
					printf("\nThank You!!!\n");
					break;
					
			default :
					printf("\nERROR: Invalid Choice...\nEnter Valid Choice\n");
		}
	}
}