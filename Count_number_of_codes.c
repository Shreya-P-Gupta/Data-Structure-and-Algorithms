#include <stdio.h>
#include <malloc.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
int totalNodes(struct node *);
int main()
{
int option, val;
struct node *ptr;
create_tree(tree);
clrscr();
do
{
printf("\n 8. Count the total number of nodes");
printf("\n Total no. of nodes = %d", totalNodes(tree));
{
int totalNodes(struct node *tree)
{
if(tree==NULL)
return 0;
else
return(totalNodes(tree–>left) + totalNodes(tree–>right) + 1);
}
}
}
