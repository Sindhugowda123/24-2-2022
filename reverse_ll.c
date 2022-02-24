#include <stdio.h>
#include <stdlib.h>

#define NODE_SIZE 5
  
typedef struct node
{
		int data;
		struct node *link;
}slist;

void reverse(slist **head)
{
		slist *prev = NULL;
		slist *current = *head;
		slist *link = NULL;
		while (current != NULL)
		{
				link = current->link;
				current->link = prev;
				prev = current;
				current = link;
		}
		*head = prev;
}

void insert(slist **head, int data)
{
		slist *new = malloc(sizeof(slist));
		if(new == NULL)
		{
				printf("Memory is not allocated\n");
		}
		else
		{		
				new->data = data;
				new->link = NULL;
				if(*head == NULL)
				{
						*head = new;
				}
				else
				{
						slist *temp = *head;
						while(temp->link != NULL)
						{
								temp = temp->link;
						}
						temp->link = new;
				}
		}
}

void display(slist **head)
{
		slist *temp = *head;
		if(*head == NULL)
		{
				printf("List is empty\n");
		}
		else
		{
				while(temp != NULL)
				{
						printf("%d ", temp->data);
						temp = temp->link;
				}
				printf("\n");
		}
}

int main()
{
		int data,i=0;
        slist *head = NULL;
		while(i++<NODE_SIZE)
		{
				printf("Enter data : ");
				scanf("%d", &data);
				insert(&head, data);
		}
		printf("Linked list before reveresing : ");
		display(&head);
		reverse(&head);
		printf("Linked list after reveresing : ");
		display(&head);
}

