#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define MAX 100

struct node{
    int info;
    struct node *next;
};

struct node *merge_sort(struct node *p);
struct node *divide(struct node *p);
struct node *merge(struct node *p, struct node *q);
void display(struct node *start);
struct node *create(struct node *start);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);

int main(){
    struct node *start=NULL;
    start = create(start);
    //start = merge_sort(start);
    display(start);
    printf("\n");
    return 0;
}

struct node * create(struct node *start){
    int n, i=0;
    struct node *temp = start,*newnode;
    printf("\nEnter the number of elments to be added: ");
    scanf(" %d",&n);
    printf("\nEnter the element at 0 : ");
    newnode = (struct node*) malloc(sizeof(struct node)); assert(newnode);
    newnode->next = NULL;
    scanf(" %d",&newnode->info);
    temp = newnode;
    start = temp;
    for(i = 1; i < n; i++){
        printf("\nEnter the element at %d : ",i);
        newnode = (struct node*) malloc(sizeof(struct node)); assert(newnode);
        newnode->next = NULL;
        scanf(" %d",&newnode->info);
        temp->next = newnode;
        temp = newnode;
    }
    
    return start;
}

void display(struct node *temp){
    while(temp!=NULL){
        printf(" %2d",temp->info);
        temp = temp->next;
    }
}
