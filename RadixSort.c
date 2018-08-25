#include<stdio.h>
#include<stdlib.h>

struct node{
  int info;
  struct node *link;
}*start = NULL;

void radix_sort();
int large_dig();
int digit(int number, int k);

int main(){
  struct node, *tmp, *q;
  int i,n,item;
  printf("\n Enter the number of elements in the list : ");
  scanf(" %d",&n);
  
  for(i=0; i<n; i++){
    printf("\n Enter element %d: ",i+1);
    scanf(" %d",&item);
    
    tmp = (struct node*) malloc (sizeof(struct node));
    tmp->info = item;
    tmp->link = NULL;
    
    if(start == NULL)
      start = tmp;
    else{
      q = start;
      
      while(q->link != NULL)
        q = q->link;
      q->link = tmp;
    }
  }
  radix_short();
  printf("\n Sorted list is : \n");
  q = start;
  
  while(q != NULL){
    printf("%2d", q->info);
    q = q->link;
  }
  printf("\n");

  return 0;
}


