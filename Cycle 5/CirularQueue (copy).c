#include<stdio.h>
#include<stdlib.h>

typedef struct self{
	int data;
	struct self *next;
}node;

node *head = NULL;

node* create_node(){
	node *n1;
	n1 = (node*) malloc(sizeof(node));
	n1->next = NULL;
	return n1;
}

void add_Circularend(node *new){
		node *ptr;
		ptr = head;
		if(head == NULL){
			head = new;	
			new->next = head;	
			return;
		}
		while(ptr->next != head){
		  	ptr  = ptr->next;
		}
		ptr->next = new;
		new->next = head;
}

void delete_Circularfirst(){
	node *ptr;
	ptr = head;
	int data;
	if(ptr == NULL){
		printf("\nQueue UnderFlow\n");
		return;
	}
	head = ptr->next;
	data = ptr->data;
	free(ptr);
	printf("\nPopped element: %d \n",data);
}


void displayCircular(){
	if(head == NULL){
	 printf("\nEmpty List\n");
	}
	else{
		node *ptr;
		ptr = head;
		printf("\nList: ");
		while(ptr->next != head){
			printf("%d ",ptr->data);
			ptr  = ptr->next;
		}
		printf("%d ",ptr->data);
	}

}

void main(){
	node *new;
	int option,data;
	do{
		printf("\nEnter option to continue\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d",&option);
		switch(option){
		case 1:	new = create_node();
			printf("Enter number: ");
			scanf("%d",&data);
			new->data = data;
			add_Circularend(new);
			break; 
		case 2: delete_Circularfirst();
			break;
		case 3: displayCircular();
			break;
		case 4: printf("Exiting....");
			break;
		default: printf("Enter valid option");	
		}
	}while(option != 4);
}
