#include <stdio.h>
#include <stdlib.h>
#include<math.h>

struct node {
	struct node *lchild;
	int info;
	struct node *rchild;
};

struct node* insert(struct node *ptr, int key);
void inorder(struct node* root);
int max(int x, int y);
int min(int x, int y);
int isBalanced(struct node* root);

int main() {

	struct node *root = NULL;
	int i = 0;
//	int arr[] = { 3,  9, 10, 11, 12, 15, 21, 23, 44, 45, 96 };
	int arr[] = { 15, 10, 9, 11, 12, 3, 45, 23, 96, 21, 44 };

	for (i = 0; i < 12; i++) {
		root = insert(root, arr[i]);
	}
	inorder(root);
	if(isBalanced(root)!=0)
		printf("\nThe tree is balanced\n");
	else
		printf("\nThe tree is not balanced\n");

	return 0;
}

struct node* insert(struct node *root, int key) {

	struct node *tmp, *par, *ptr;
	ptr = root;
	par = NULL;

	while (ptr != NULL) {
		par = ptr;

		if (key < ptr->info)
			ptr = ptr->lchild;
		else if (key > ptr->info)
			ptr = ptr->rchild;
		else {
			printf("Duplicate Key!");
			return root;
		}
	}

	tmp = (struct node*) malloc(sizeof(struct node));
	tmp->info = key;
	tmp->lchild = NULL;
	tmp->rchild = NULL;

	if (par == NULL)
		root = tmp;
	else if (key < par->info)
		par->lchild = tmp;
	else
		par->rchild = tmp;

	return root;
}

void inorder(struct node* root) {

	//printf("%2d \n",root->info);
	if (root == NULL)
		return;
	inorder(root->lchild);
	printf("%2d ", root->info);
	inorder(root->rchild);
}

int maxDepth(struct node* root) {
	if (root == NULL) {

		return 0;
	}
	return 1 + max(maxDepth(root->lchild), maxDepth(root->rchild));
}

int minDepth(struct node* root) {
	if (root == NULL) {

		return 0;
	}
	return 1 + min(minDepth(root->lchild), minDepth(root->rchild));
}

int isBalanced(struct node* root) {
	return (maxDepth(root) - minDepth(root) <= 1);
}

int max(int x, int y){
	if(x>y)
	 return x;
	else
	 return y;
}

int min(int x, int y){
	if(x<y)
	 return x;
	else
	 return y;
}
