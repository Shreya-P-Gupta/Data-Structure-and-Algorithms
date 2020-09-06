
#include<stdlib.h>
#include<stdio.h>



struct node 
{
   int data;
   struct node *next, *prev;
};

struct node *startlist, *newnode, *endlist;
void create(int);
void display();
void insertf();
void insertm();
void inserte();
void insertele();
void traverse();

int main() 
{
   startlist=NULL;
   endlist=NULL;
   int i,n,ch;

       do
         {
           printf("\n menu\n");
           printf("1.create\n");
           printf("2.display\n");
           printf("3. insert at the begining\n");
           printf("4. insert at the given position\n");
           printf("5. insert at the end\n");
           printf("6. isert before the element\n");
           printf("7. traverse\n");
           printf("8. exit\n");
           scanf("%d",&ch);
                switch(ch)
                { 
                   case 1:
                    printf("how many nodes\n");
                    scanf("%d",&n);
                    create(n);
                    break;
                   case 2:      display();
                                break;
                   case 3:      insertf();
                                break;
                   case 4:      insertm();
                                break; 
                   case 5:      inserte();
                                break;
                   case 6:      insertele();
                                break;
                   case 7:      traverse();
                                break;
                   case 8:      exit(0);
                                break; 
               }
         }
       while(ch!=8);
    return 0;
}


void create(int n)
{
       struct node *temp;
       int m=n;
       int i;
       for (i=0;i<m;i++)
          {
           newnode=(struct node *)malloc(sizeof(struct node));
           printf("enter an integer value");
           scanf("%d",&(newnode->data));
           newnode->next=NULL;
           newnode->prev=NULL;
                if(startlist==NULL)
                   {
                     startlist=newnode;
                     temp=newnode;
                     endlist=newnode;
                   }
                else
                   {
                     temp->next=newnode;
                     newnode->prev=temp;
                     temp=newnode;
                   }
           }
}


void display()
{
         struct node *temp;
         temp=startlist;
         while(temp!=NULL)
              {
               printf("%d-------> ", temp->data);
               temp=temp->next;
               }
}
void insertf()
{
		 struct node *temp;
		 newnode=(struct node*)malloc (sizeof(struct node));
		 printf("Enter an integer value \n");
		scanf("%d",&(newnode->data));
		newnode->next=NULL;
                newnode->prev=NULL;
		temp=startlist;
		newnode->next=temp;
		startlist=newnode;
}

void insertm()
{
           int x;
           struct node *temp,*ptr;
           printf("enter the position");
           scanf("%d",&x);
           newnode=(struct node*)malloc(sizeof(struct node));
           printf("enter an element");
           scanf("%d",&(newnode->data));
           temp=startlist;
           ptr=NULL;
           int c=1;
          while(c<x)
             {
               ptr=temp;
               temp=temp->next;
               c++;
              }
          ptr->next=newnode;
          newnode->next=temp;
          newnode->prev=ptr;
          temp->prev=newnode;

}


void inserte()
{
      struct node *temp=startlist;
      newnode=(struct node *)malloc(sizeof(struct node));
      printf("enter an integer value");
      scanf("%d",&(newnode->data));
      newnode->next=NULL;
      newnode->prev=NULL;
      while(temp->next !=NULL)
           {
              temp=temp->next;
           }
     temp->next=newnode;
     newnode->prev=temp;
}


void insertele()
{
         struct node *temp,*previous; 
         int ele;
         newnode=(struct node *)malloc(sizeof(struct node));
         printf("enter an integer");
         scanf("%d",&(newnode->data));
         printf("enter the element to be searched");
         scanf("%d",&ele);
         temp=startlist;
         previous=NULL;
         while(temp->data!=ele)
              {
              previous=temp;
           temp=temp->next;
              }
           previous->next=newnode;
           newnode->prev=previous;
          newnode->next=temp;
          temp->prev=newnode;
}

void traverse()
{
   struct node *temp=startlist;
      
      while(temp !=NULL)
           {
           printf("%d  \n",temp->data); 
            temp=temp->next;
           }
    
     
}
















                                                      













