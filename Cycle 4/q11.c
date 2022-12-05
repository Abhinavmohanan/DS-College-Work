#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

void main(){
	node *new;
	int option,data;
	do{
		printf("\nEnter option to continue\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf("%d",&option);
		switch(option){
		case 1:	new = create_node();
			printf("Enter number: ");
			scanf("%d",&data);
			new->data = data;
			add_atpos(new,1);
			break;
		case 2: popfirst();
			break;
		case 3: display();
			break;
		case 4: printf("Exiting....");
			break;
		default: printf("Enter valid option");	
		}
	}while(option != 4);
}
