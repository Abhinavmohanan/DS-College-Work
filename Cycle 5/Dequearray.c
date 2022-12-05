#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

int front=-1,rear=-1,*queue;

void main(){
	int option,data,removed;
	node *new;
	queue = (int*)calloc(max,sizeof(int));
	do{
		printf("\nEnter option to continue\n1.Enqueue front\n2.Enqueue rear\n3.Dequeue front\n4.Dequeue rear\n5.Display\n6.Exit\n");
		scanf("%d",&option);
		switch(option){
		case 1:	printf("Enter number: ");
			scanf("%d",&data);
			node *new = create_node();
			new->data = data;
			add_atpos(new,1);
			break;
		case 2:	printf("Enter number: ");
			scanf("%d",&data);
			new = create_node();
			new->data = data;
			add_end(new);
			break;	
		case 3: popfirst();
			break;
		case 4: delete_end();
			break;	
		case 5: display();
			break;
		case 6: printf("Exiting....");
			break;
		default: printf("Enter valid option");	
		}
	}while(option != 6);
}
