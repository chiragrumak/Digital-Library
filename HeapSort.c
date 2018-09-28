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

	for(i=1;i<=n;i++){
		printf("\nEnter element %d: ",i);
		scanf(" %d",&arr[i]);	
	}
	
	printf("\nEnterd list is: \n" );
	display(arr,n);
	heap_sort(arr,n);
	printf("\nSorted List is : \n");
	display(arr,n);
	
	return 0;
 }

void heap_sort(int arr[], int size){
	int max;
	buildHeap(arr,size);
	printf("\nThe heap is : ");
	display(arr,size);
	
	while(size > 1){
		max = del_root(arr,&size);
		arr[size+1] = max;
	}
}

void buildHeap(int arr[], int size){
	int i;
	for(i = size/2; i >= 1; i--)
		restoreDown(arr,i,size);

}

int del_root(int arr[], int *size){
	int max = arr[1];
	arr[1] = arr[*size];
	(*size)--;
	restoreDown(arr,1,*size);
	return max;
}

void restoreDown(int arr[], int i, int size){
	int left = 2*i;
	int right = left + 1;
	int num = arr[i];
	int temp;

//	printf("arr[%d] = %d , arr[%d] = %d \n", left,arr[left],right,arr[right]);
	
	while(right <=size){
		if(num >= arr[left] && num >= arr[right]){
			arr[i] = num;
			return;
		}
		else if(arr[left] > arr[right]){
			temp = arr[i];			
			arr[i] = arr[left];
			arr[left] = temp;			
			i = left;
		}
		else{
			temp = arr[i];
			arr[i] = arr[right];
			arr[right] = temp;
			i = right;
		}
		left = 2 * i;
		right = left + 1;
	//printf("\n Reached till here");
	}
	
	if(left == size && num < arr[left]){
		temp = arr[i];
		arr[i] = arr[left];
		arr[right] = temp;
		i = left;
	}
//	printf("\n Array at this moment = ");
	//display(arr,size);
}

void display(int arr[], int n){
	int i;
	
	for(i=1; i <=n;i++)
		printf(" %2d ", arr[i]);
	printf("\n");
}

// Backed Up Old Code:

/*

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

	for(i=1;i<=n;i++){
		printf("\nEnter element %d: ",i);
		scanf(" %d",&arr[i]);	
	}
	
	printf("\nEnterd list is: \n" );
	display(arr,n);
	heap_sort(arr,n);
	printf("\nSorted List is : \n");
	display(arr,n);
	
	return 0;
 }

void heap_sort(int arr[], int size){
	int max;
	buildHeap(arr,size);
	printf("\nThe heap is : ");
	display(arr,size);
	
	while(size > 1){
		max = del_root(arr,&size);
		arr[size+1] = max;
	}
}

void buildHeap(int arr[], int size){
	int i;
	for(i = size/2; i >= 1; i--)
		restoreDown(arr,i,size);

}

int del_root(int arr[], int *size){
	int max = arr[1];
	arr[1] = arr[*size];
	(*size)--;
	restoreDown(arr,1,*size);
	return max;
}

void restoreDown(int arr[], int i, int size){
	int left = 2*i;
	int right = left + 1;
	int num = arr[i];

	printf("arr[%d] = %d , arr[%d] = %d \n", left,arr[left],right,arr[right]);
	
	while(right <=size){
		if(num >= arr[left] && num >= arr[right]){
			arr[i] = num;
			return;
		}
		else if(arr[left] > arr[right]){
			arr[i] = arr[left];
			i = left;
		}
		else{
			arr[i] = arr[right];
			i = right;
		}
		left = 2 * i;
		right = left + 1;
	}
	
	if(left == size && num < arr[left]){
		arr[i] = arr[left];
		i = left;
	}
	printf("\n Array at this moment = ");
	display(arr,size);
}

void display(int arr[], int n){
	int i;
	
	for(i=1; i <=n;i++)
		printf(" %2d ", arr[i]);
	printf("\n");
}


*/

