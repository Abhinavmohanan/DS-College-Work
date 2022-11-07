#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

void main(){
	int data,option,after;
	node *new;
	do{
		printf("\nEnter option to continue\n1.Add data\n2.Add after\n3.Display\n4.Exit\n");
		scanf("%d",&option);
		switch(option){
		case 1:
			new = create_node();
			printf("Enter number: ");
			scanf("%d",&data);
			new->data = data;
			add_end(new);
			break;
		case 2: 
			new = create_node();
			printf("Enter number: ");
			scanf("%d",&data);
			new->data = data;
			printf("Add after: ");
			scanf("%d",&after);
			add_after(new,after);
			break;
		case 3: display();
			break;
		case 4: printf("Exiting");
			break;
		default: printf("Enter valid option");	
		}
	}while(option != 4);

}
