/**********************************************************************************
					Binary Tree Sort
				Author    : Vineet kumar
				Reference : Data Structures through C in Depth
				Start Date: 18/08/2018

***********************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void quicksort(int *, int, int);
int partition(int *, int, int);

int main(){
	int arr[MAX],i,j,temp,n,flag=0;
	
	printf("\nEnter the number of elements: ");
	scanf(" %d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter element %d: ",i+1);
		scanf(" %d",&arr[i]);	
	}

	quicksort(arr,0,n-1);
	
	printf("\nThe sorted list is as : \n");

	for(i=0;i<n;i++)
		printf(" %2d",arr[i]);
	printf("\n\n");

	return 0;
}

