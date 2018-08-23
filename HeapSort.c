/**********************************************************************************
					Heap Sort
				Author    : Vineet kumar
				Reference : Data Structures through C in Depth
				Start Date: 23/08/2018
***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void heap_sort(int arr[], int size);
void buildHeap(int arr[], int size);
int del_root(int arr[], int *size);
void restoreDown(int arr[], int i, int size);
void display(int arr[], int n);

int main(){
	int i,n,arr[MAX];
	
	printf("\nEnter the number of elements: ");
	scanf(" %d",&n);
	printf("\n Reached till here! n = %d",n);	

	for(i=0;i<n;i++){
		printf("\nEnter element %d: ",i+1);
		scanf(" %d",&arr[i]);	
	}
	
	printf("\nEnterd list is: \n" );
	display(arr,n);
	heap_sort(arr,n);
	printf("\nSorted List is : \n");
	display(arr,n);
	
	return 0;
 }
