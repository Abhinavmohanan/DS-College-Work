#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"

void main(){
	int data,option,after;
	node *new;
	do{
		printf("\nEnter option to continue\n1.Add data\n2.Add after\n3.Add before\n4.Insert at position\n5.Delete data\n6.Delete at\n7.Delete Smallest\n8.Reverse the list\n9.Search\n10.Display\n11.Exit\n");
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
		case 3: new = create_node();
			printf("Enter number: ");
			scanf("%d",&data);
			new->data = data;
			printf("Add before: ");
			scanf("%d",&after);
			add_before(new,after);
			break;	
		case 4: new = create_node();
			printf("Enter number: ");
			scanf("%d",&data);
			new->data = data;
			printf("Position: ");
			scanf("%d",&after);
			add_atpos(new,after);
			break;	
		case 5: printf("Enter number: ");
			scanf("%d",&data);
			printf("Deleting....");
			delete_data(data);
		case 6: printf("Enter position to delete: ");
			scanf("%d",&data);
			printf("Deleting....");
			delete_atpos(data);
			break;
		case 7: delete_smallest();
			break;
		case 8:	reverse_list();
			break;
		case 9: printf("Enter data to search: ");
			scanf("%d",&data);
			search_elem(data);
			break;
		case 10:display();
			break;
		case 11: printf("Exiting");
			break;
		default: printf("Enter valid option");	
		}
	}while(option != 11);

}
