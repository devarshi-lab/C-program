#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node* PNODE;
typedef struct Node** PPNODE;

int Count(PNODE);

void InsertFirst(PPNODE Head,int iValue)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;
	newn->prev=NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		newn->next = *Head;
		(*Head)->prev=newn;
		*Head = newn;
	}
}

void InsertLast(PPNODE Head,int iValue)
{
	PNODE newn = NULL;
	PNODE temp = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn->data=iValue;
	newn->next=NULL;

	if(*Head == NULL)
	{
		*Head = newn;
	}
	else
	{
		temp = *Head;

		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next=newn;
		newn->prev=temp;
	}
}

void InsertAtPos(PPNODE Head,int iValue,int iPos)
{
	PNODE newn = NULL;
	PNODE temp = NULL;

	int i=0;
	int iCount = Count(*Head);

	

	if(*Head == NULL)
	{
		*Head = newn;
	}
	if(iPos<0 || iPos>iCount+1)
	{
		return;
	}
	if(iPos == 1)
	{
		return InsertFirst(Head,iValue);
	}
	else if(iPos == iCount+1)
	{
		return InsertLast(Head,iValue);
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data=iValue;
		newn->next=NULL;
		newn->prev=NULL;
		temp = *Head;

		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}

		newn->next=temp->next;
		temp->next->prev = newn;
		temp->next=newn;
		newn->prev=temp;
	}
}

void Display(PNODE Head)
{
	printf("\n");
	while(Head != NULL)
	{
		printf("|%d|<=>",Head->data);
		Head=Head->next;
	}
	printf("NULL\n");
}

void DeleteFirst(PPNODE Head)
{
	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		(*Head) = (*Head)->next;
		free((*Head)->prev);
		(*Head)->prev = NULL;
	}
}

void DeleteLast(PPNODE Head)
{
	PNODE temp = *Head;

	if(*Head == NULL)
	{
		return;
	}
	else if((*Head)->next == NULL)
	{
		free(*Head);
		*Head = NULL;
	}
	else
	{
		while(temp->next->next != NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

void DeleteAtPos(PPNODE Head,int iPos)
{
	PNODE temp = *Head;
	PNODE temp2 = NULL;
	int i=0;

	int iCount = Count(*Head);

	if(*Head == NULL)
	{
		return;
	}
	if(iPos<0 || iPos>iCount)
	{
		return;
	}
	else if(iPos==1)
	{
		DeleteFirst(Head);
	}
	else if(iPos==iCount)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->next;
		}
		temp2 = temp->next;
		temp->next = temp2->next;
		(temp2->next)->prev=temp;
		free(temp2);
	}
}

int Count(PNODE Head)
{
	int iCnt = 0;
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
	int no = 0;
	int choice = 0;
	int iRet = 0;
	int iPos = 0;

	do
	{
		printf("\n-------------------------------------------------------------------------\n");
		printf("\n1.InsertFirst\n2.InsertLast\n3.InsertAtPos\n4.Diplay\n5.Count\n6.DeleteFirst\n7.DeleteLast\n8.DeleteAtPos\n9.Exit\n");
		printf("-------------------------------------------------------------------------\n");
		printf("Enter your choice : \t");
		scanf("%d",&choice);
		printf("-------------------------------------------------------------------------\n");

		switch(choice)
		{
			case 1:	printf("Enter the Number : \t");
					scanf("%d",&no);
					InsertFirst(&First,no);
					break;
			case 2:	printf("Enter the Number : \t");
					scanf("%d",&no);
					InsertLast(&First,no);
					break;
			case 3:	printf("Enter the position : \t");
					scanf("%d",&iPos);
					printf("Enter the Number : \t");
					scanf("%d",&no);
					InsertAtPos(&First,no,iPos);
					break;
			case 4:	Display(First);
					break;
			case 5: iRet = Count(First);
					printf("\nNumber of elements present in linked list is : %d\n",iRet);
					break;
			case 6:	DeleteFirst(&First);
					break; 
			case 7:	DeleteLast(&First);
					break;
			case 8: printf("Enter the Position : \t");
					scanf("%d",&iPos);
					DeleteAtPos(&First,iPos);
					break;
			case 9:	break;
			default: printf("Enter valid choice!!!!\n");
		}
	}while(choice!=9);


	return 0;
}