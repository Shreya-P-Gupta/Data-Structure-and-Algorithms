
#include <stdio.h>
#include <stdlib.h>
struct bt
{  
    int info;

    struct bt *l;

    struct bt *r;

}*root = NULL, *temp = NULL, *t2, *t1;



void insert();

void inorder(struct bt *t);

void create();

void search(struct bt *t);

void preorder(struct bt *t);

void postorder(struct bt *t);

void main()
{
    int ch;

    printf("\nEnter the execution you wish to preform");
    printf("\n1 - Insert an element into tree\n");
    printf("2 - Inorder Traversal\n");
    printf("3 - Preorder Traversal\n");
    printf("4 - Postorder Traversal\n");
    printf("5 - Exit\n");

    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);

        switch (ch)
        {

        case 1:    

            insert();

            break;     

        case 2:    

            inorder(root);

            break;

        case 3:    

            preorder(root);

            break;

        case 4:    

            postorder(root);

            break;

       case 5:    

            exit(0);

            break;
        
        default :     

            printf("Wrong choice, Please enter correct choice  ");

            break;    

        }}
}

void insert()         ///* To insert a node in the tree */

{

    create();

    if (root == NULL) 

        root = temp;

    else    

        search(root);    

     
 
     


}

 void create()            /* To create a node */

{

    int data;
    printf("Enter data of node to be inserted : ");

    scanf("%d", &data);

    temp = (struct bt *)malloc(1*sizeof(struct bt));

    temp->info = data;

    temp->l = temp->r = NULL;

}

void search(struct bt *t)           /* to  insert new node simply as binary search tree*/

{

    if ((temp->info > t->info) && (t->r != NULL))     
        search(t->r);

    else if ((temp->info > t->info) && (t->r == NULL))          //if greater then towards right

        t->r = temp;

    else if ((temp->info < t->info) && (t->l != NULL))    

        search(t->l);

    else if ((temp->info < t->info) && (t->l == NULL))

        t->l = temp;

  

  

}

void inorder(struct bt *t)          /* recursion to perform inorder traversal of tree */
{
    if (root == NULL)

    {

        printf("No elements in a tree to display");

        return;

    }
    if (t->l != NULL)    

        inorder(t->l);

    printf("%d -> ", t->info);

    if (t->r != NULL)    

        inorder(t->r);
}
void preorder(struct bt *t)         /* To find the preorder traversal */
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");

        return;

    }

    printf("%d -> ", t->info);

    if (t->l != NULL)    

        preorder(t->l);

    if (t->r != NULL)    

        preorder(t->r);

}

void postorder(struct bt *t)           /* To find the postorder traversal */
{

    if (t->l != NULL) 

        postorder(t->l);

    if (t->r != NULL) 

        postorder(t->r);

    printf("%d -> ", t->info);

}
