#include<stdio.h>
#include <stdlib.h>

struct Node
{
	int Data;
	struct Node* next;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
	PNODE newn = NULL;

	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=no;
	newn->next = NULL;

	if(*Head == NULL)
	{
		*Head =newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;

	}
}

void Display(PNODE Head)
{
	while(Head != NULL)
	{
		printf("%d\t",Head->Data);
		Head=Head->next;
	}
}

int main()
{
	PNODE First = NULL;
	InsertFirst(&First,11);
	InsertFirst(&First,21);

	Display(First);


	return 0;
}