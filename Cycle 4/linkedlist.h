typedef struct self{
	int data;
	struct self *next;
}node;

node *head = NULL;


node* create_node(){
	node *n1 = (node*) malloc(sizeof(node));
	n1->next = NULL;
	return n1;
}

void add_end(node *new){
		node *ptr;
		ptr = head;
		if(head == NULL){
			head = new;	
			return;
		}
		while(ptr->next != NULL){
		  	ptr  = ptr->next;
		}
		ptr->next = new;
}


void add_after(node *new,int after){
		node *ptr;
		ptr = head;
		if(head == NULL){
			printf("\nEmpty List\n");
			return;
		}
		while(ptr != NULL && ptr->data != after){
		  	ptr  = ptr->next;
		}
		if(ptr == NULL){
		 	printf("Item not found");
		 	return;
		}
		new->next = ptr->next;
		ptr->next = new;
}

void add_before(node *new,int before){
		node *ptr;
		ptr = head;
		if(head == NULL){
			printf("\nEmpty List\n");
			return;
		}
		while(ptr != NULL && ptr->next->data != before && ptr->data != before){
		  	ptr  = ptr->next;
		}
		if(ptr == NULL){
		 	printf("Item not found");
		 	return;
		}
		new->next = ptr->next;
		ptr->next = new;
}

void add_atpos(node *new,int pos){
		node *ptr;
		ptr = head;
		int current=2;
		if(pos == 1){
			new->next = head;
			head = new;
			return;
		}
		if(head == NULL){
			printf("\nEmpty List\n");
			return;
		}
		while(ptr != NULL && pos != current){
		  	ptr  = ptr->next;
		  	current++;
		}
		if(ptr == NULL){
		 	printf("Position empty");
		 	return;
		}
		new->next = ptr->next;
		ptr->next = new;
}

void delete_data(int data){

	

}

void display()
{
	if(head == NULL){
	 printf("\nEmpty List\n");
	}
	else{
		node *ptr = head;
		printf("\nList: ");
		while(ptr != NULL){
			printf("%d ",ptr->data);
			ptr  = ptr->next;
		}
	}
}


