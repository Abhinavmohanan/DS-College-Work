#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

void main(){
	int data,option;
	node *new;
	do{
		printf("\nEnter option to continue\n1.Add data\n2.Display\n3.Exit\n");
		scanf("%d",&option);
		switch(option){
		case 1:
			new = create_node();
			printf("Enter number: ");
			scanf("%d",&data);
			new->data = data;
			add_end(new);
			break;
		case 2: display();
			break;
		case 3: printf("Exiting");
			break;
		default: printf("Enter valid option");	
		}
	}while(option != 3);

}

