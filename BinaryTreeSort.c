/**********************************************************************************
					Binary Tree Sort
				Author    : Vineet kumar
				Reference : Data Structures through C in Depth
				Start Date: 18/08/2018

***********************************************************************************/


#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct node{
    
    struct node *lchild;
    int info;
    struct node *rchild;
};

struct node *stack[MAX];
int top =-1;
void push_stack(node *item);
struct node* pop_stack();
int stack_empty();
struct node *insert(struct node *ptr, int item);
void inorder (struct node* ptr, int arr[]);
struct node *Destroy(struct node *ptr);

int main(){
	struct node* root = NULL;   
	int arr[MAX],n,i;

	printf("\nEnter the number of elements: ");
	scanf(" %d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter element %d: ",i+1);
		scanf(" %d",&arr[i]);	
	}

    for(i=0;i<n;i++)
        root = insert(root,arr[i]);
    
    inoder(root,arr);

	printf("\nThe sorted list is as : \n");

	for(i=0;i<n;i++)
		printf(" %2d",arr[i]);
	printf("\n\n");

	return 0;
}
