#include<stdio.h>
#include<stdlib.h>

#define NODE_SIZE 5

typedef struct node
{
		int data;
		struct node *link;
}slist;

slist *head = NULL;

void insert(int data)
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
		if(head == NULL)
		{
				head = new;
		}
		else
			{
					slist *temp = head;
					while(temp->link != NULL)
					{
							temp = temp->link;
					}
					temp->link = new;
			}
		}
}

void display()
{
		slist *temp = head;
		if(head == NULL)
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
		int data, i=0;
		while(i++<NODE_SIZE)
		{
		printf("Enter data : ");
		scanf("%d", &data);
		insert(data);
		display();
		}
}



