#include<stdio.h>
#include<stdlib.h>
#define MAX 50

enum type_of_records {EMPTY, DELETED,OCCUPIED};
struct Employee{
	int empid;
	char name[20];
	int age;
};

struct Record{
	struct Employee info;
	enum type_of_records status;
};


void insert(struct Employee emprec, struct Record table[]);
int search(int key, struct Record table[]);
void del(int key, struct Record table[]);
void display (struct Record table[]);
int hash(int key);


int main(){
	
	int i,key,choice;
	struct Record table[MAX];
	struct Employee emprec;
	
	for(i=0;i <MAX; i++)
		table[i].status = EMPTY;
/*
	struct Employee emp1 = {1,"Chirag",29};
	struct Employee emp2 = {2,"Ram",26};
	struct Employee emp3 = {5,"Julifer",21};
	
	table[1].info = emp1;
	table[1].status = OCCUPIED;

	table[2].info = emp2;
	table[2].status = OCCUPIED;
	table[5].info = emp3;
	table[5].status = OCCUPIED;
*/
	while(1){
		printf("1. Insert a record \n");
		printf("2. Search a record \n");
		printf("3. Delete a record \n");
		printf("4. Display table \n");
		printf("5. Exit \n");
		printf("Enter your choice: \n");
		scanf("%d",&choice);

		switch(choice){
			case 1: 
					printf("Enter empid, name, age: ");
					scanf(" %d%s%d",&emprec.empid,emprec.name,&emprec.age);
					insert(emprec,table);
					break;					
			case 2: 
					printf("Enter a key to be searched: ");
					scanf("%d",&key);
					i = search(key,table);
					if(i==-1)
						printf("Key not found \n");
					else
						printf("Key found at index %d \n", i);
					break;					
			case 3: 
					printf("Enter a key to be deleted: \n");
					scanf("%d",&key);
					del(key,table);	
					break;
			case 4:
					display(table);
					break;
			case 5:
					exit(1);
		}
	}
	
	return 0;
}

int search(int key, struct Record table[]){

	int i=0,h=0,location;
	h = hash(key);
	location = h;
	for(i=1;i!=MAX-1;i++){
		if(table[location].status ==EMPTY)
			return -1;
		if(table[location].info.empid == key){
			if(table[location].status == DELETED)
				return -1;
			else
				return location;			
		}
		location = (h+i) %MAX;	
	}
	
	return -1;
}

void insert(struct Employee emprec, struct Record table[]){
	
	int i,location,h;
	int key = emprec.empid;
	h = hash(key);

	location = h;
	
	for(i=0; i!=MAX-1;i++){
		if(table[location].status == EMPTY || table[location].status == DELETED){
			table[location].info = emprec;
			table[location].status = OCCUPIED;
			printf("Record inserted \n\n");
			return;
		}
		
		if(table[location].info.empid == key){
			printf("Duplicate key \n\n");
			return;
		}
	
		location = (h+i)%MAX;
	}	

	printf("Record cannot be inserted : Table overFlow \n\n");
}

void display(struct Record table[]){
	int i;
	
	for(i=0; i < MAX; i++){
		printf("[%2d] : ",i);
		if(table[i].status == OCCUPIED){
			printf("Occupied: %2d %2s",table[i].info.empid,table[i].info.name);
			printf(" %2d\n",table[i].info.age);		
		}
		else if(table[i].status == DELETED){
			printf("Deleted \n");
		}
		else
		printf("Empty\n");
	}
}

void del(int key, struct Record table[]){

	int location = search(key,table);
	if(location ==-1)
		printf("\nKey not found");
	else
		table[location].status = DELETED;	
}

int hash(int key){
	return(key%MAX);
}
