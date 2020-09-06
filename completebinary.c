#include<stdio.h>
#include<stdbool.h>
struct Node
{
    int key;
    struct Node *left, *right;
};
 struct Node *newNode(char k)
{
    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node->key = k;
    node->right = node->left = NULL;
    return node;
}
bool isComplete (struct Node* root, unsigned int index)
{
    // An empty tree is complete
    if (root == NULL)
        return (true);
    if (index >= number_nodes)
        return (false);
 
    
    return (isComplete(root->left, 2*index + 1, number_nodes) &&
            isComplete(root->right, 2*index + 2, number_nodes));
}
 

int main()
{
    struct Node* root = NULL;
    root = newNode(0);
    root->left = newNode(1);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->right = newNode(5);

    unsigned int index = 0;
 
    if (isComplete(root, index))
        printf("The Binary Tree is complete\n");
    else
        printf("The Binary Tree is not complete\n");
    return (0);
}
