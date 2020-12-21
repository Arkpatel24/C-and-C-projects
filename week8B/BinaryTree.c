#include <stdio.h>
#include <stdlib.h> 
 
struct btsnode
{
    int data;
    struct btsnode *l;
    struct btsnode *r;
};
 
typedef struct btsnode node;
node* bst(int a[], int first, int last);
node* new(int data);
void display(node *temp);
 
int main()
{   
    int a[] = {1, 2, 3, 4, 5, 6, 7 };
    
    node *root = (node*)malloc(sizeof(node));  
    int n = sizeof(a) / sizeof(a[0]);
 
    printf("Sorted array is:\n");
    for (int i = 0;i < n;i++)
    {
        printf("%d\t", a[i]);
	}
	root = bst(a, 0, n - 1); 
	
    printf("\nTraversal of binary search tree is:\n");
    display(root);
    
    return 0;
}
 

node* newNode(int data)
{
    node* n = (node*)malloc(sizeof(node));
 
    n->data = data;
    n->l = NULL;
    n->r  =  NULL;
    return n;
}
 

node* bst(int a[], int first, int last)
{
    int mid;
    node* temp = (node*)malloc(sizeof(node));
    if (first > last)
    {
        return NULL;
	}
	mid = (first + last) / 2;
    temp = newNode(a[mid]);
    temp->l = bst(a, first, mid - 1);
    temp->r = bst(a, mid + 1, last);
    return temp;
}
 

void display(node *temp)
{
    printf("%d\t", temp->data);
    if (temp->l != NULL)
        display(temp->l);
    if (temp->r != NULL)
        display(temp->r);
}
