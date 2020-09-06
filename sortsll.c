#include<stdlib.h>
#include<stdio.h>



struct node 
{
   int data;
   struct node *next;
};
struct node *startlist, *newnode;
void create();
void sort();
void display();

int main() 
{
   startlist=NULL;
   int i,n;
   create();
   display();
   sort();
   display();
   return 0;
}

void create()
{
  int n;
  printf("how many nodes\n");
  scanf("%d",&n);
  struct node *temp;
       
       int i;
       for (i=0;i<n;i++)
          {
           newnode=(struct node *)malloc(sizeof(struct node));
           printf("enter an integer value");
           scanf("%d",&(newnode->data));
           newnode->next=NULL;
                if(startlist==NULL)
                   {
                     startlist=newnode;
                     temp=newnode;
                   }
                else
                   {
                     temp->next=newnode;
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


void sort()
{
         struct node *q, *p;
         int x;
         q=startlist; 
         while(q!=NULL)
         {
          p=q->next;
               while(p!=NULL)
                 {
                   if(q->data>p->data)
                       {
                         x=q->data;
                         q->data=p->data;
                         p->data=x;
                       }
                       p=p->next;
                 }
          q=q->next;
         }
}









