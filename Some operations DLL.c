#include<stdio.h>
#include<stdlib.h>
struct node
{
	int num;
	struct node *next,*prev;
}*head=NULL,*cur,*ptr;
void create()
{
	int val;
	cur=(struct node *) malloc(sizeof(struct node));
	printf("enter the value");
	scanf("%d",&val);
	cur->num=val;
	cur->next=NULL;
	cur->prev=NULL;
	if(head==NULL)
	{
		head=cur; ptr=cur;
	}
	else
	{
		ptr->next=cur;
		cur->prev=ptr;
		ptr=cur;
	}
}
void display()
{
	if(head==NULL)
	printf("no node is present");
	else
	{
		ptr=head;
		while(ptr!=NULL)
		{
			printf("%d \t",ptr->num);
			ptr=ptr->next;
		}
	}
}
void insert()
{
	int val,pos,i=1;
	cur=(struct node*) malloc(sizeof(struct node));
	printf("enter the value");
	scanf("%d",&val);
	cur->num=val;
	cur->next=NULL;
	cur-> prev=NULL;
	if(head==NULL)
	{ 
		head=cur; ptr=cur;
	}
	else
	{
		printf("enter the position");
		scanf(" %d",&pos);
		if(pos==0)
		{
			cur->next=head;
			head->prev=cur;
			head=cur;
		}
		else
		{
			ptr=head;
			while(i<pos && ptr->next!=NULL)
			{
				i++; ptr=ptr->next;
			}
			if( ptr-> next!=NULL)
			{
				cur->next=ptr->next;
				cur->prev=ptr;
				cur->next->prev=cur;
				ptr->next=cur;
			}
			else
			{
				cur->prev=ptr; ptr->next=cur;
			}
		}
	}
}
void delete()
{
	int pos;int i;
	if(head==NULL)
	printf("no  node is present");
	else
	{
		if(head->next=NULL)
		{
			head=NULL;
			free(ptr);
		}
		else
		{
			ptr=head;
			printf("enter the positiion to be deleted");
			scanf("%d",&pos);
			if(pos==0)
			{
				head=head->next;
				head->prev=NULL;
				free(ptr);
			}
			else
			{
				while((i<=pos)&&(ptr!=NULL))
				{
					i++; ptr=ptr->next;
				}
				if(ptr==NULL)
				printf("node doesnt exist");
				else
				{
					if(ptr->next==NULL)
					{
						ptr->prev->next=NULL;
						free(ptr);
					}
					else
					{
						ptr->prev->next=ptr->next;
						ptr->next->prev=ptr->prev;
					}
				}
			}
		}
	}
}	
																																																																																																												int main()
{
	int n;		
	while(1)
	{
		printf("1 to create,\n2 to display,\n3 to insert,\n4 to exit\n\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: create(); break;	
			case 2: display(); break;
			case 3: insert(); break;
			case 4: exit(1); 
			default: printf("wrong input");
		}
	}
}
















