typedef struct self{
	int data;
	struct self *next;
}node;

node *head = NULL;
int max;


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
			head = new;	
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
			head = new;	
			return;
		}
		while(ptr != NULL && ptr->next->data != before && ptr->data != before){
		  	ptr  = ptr->next;
		}
		if(ptr == NULL){
		 	printf("Item not found");
		 	return;
		}
		if(head->data == before){
			new->next = head;
			head = new;
		}
		else{
			new->next = ptr->next;
			ptr->next = new;
		}
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
	node *ptr;
	node *temp;
	ptr = head;
	if(head == NULL){
		printf("\nEmpty List\n");
		return;
	}
	if(head->data == data){
		temp = head;
		head = head->next;
		free(temp);
		return;
	}
	while(ptr != NULL && ptr->next->data != data){
		ptr = ptr->next;
	}
	if(ptr == NULL){
		printf("Item not found");
		return;
	}
	temp = ptr->next;
	ptr->next = ptr->next->next;
	free(temp);
}

void delete_atpos(int pos){
		node *ptr;
		node *temp;
		ptr = head;
		int current=2;
		if(pos == 1){
			temp = head;
			head = head->next;
			free(temp);
			return;
		}
		while(ptr != NULL && current != pos){
			ptr = ptr->next;
			current++;
		}
		if(ptr == NULL){
			printf("Item not found");
			return;
		}
		temp = ptr->next;
		ptr->next = ptr->next->next;
		free(temp);
}

void delete_end(){
		node *ptr;
		node *temp;
		ptr = head;
		if(head == NULL){
			printf("Empty Queue");
			return;
		}
		if(head->next == NULL){
			printf("Removed element : %d",head->data);
			head = NULL;
			return;
		}
		while(ptr->next != NULL){
			temp = ptr;
			ptr = ptr->next;
		}
		printf("Removed element : %d",ptr->data);
		free(ptr);
		temp->next = NULL;
}

void popfirst(){
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

void delete_smallest(){
	node *ptr;
	ptr = head;
	if(head == NULL){
		printf("\nEmpty List\n");
		return;
	}
	int small = ptr->data;
	while(ptr != NULL){
		if(ptr->data < small){
			small = ptr->data;
		}
		ptr = ptr->next;
	}
	delete_data(small);
}

void reverse_list(){
	node *current;
	node *prev = NULL,*next;
	current = next = head;
	if(head == NULL){
		printf("\nEmpty List\n");
		return;
	}
	while(current != NULL){
		next = next -> next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

void search_elem(int data){
		node *ptr;
		ptr = head;
		int current = 1;
		if(head == NULL){
			printf("\nEmpty List\n");
			return;
		}
		while(ptr != NULL && ptr->data != data){
		  	ptr  = ptr->next;
		  	current++;
		}
		if(ptr == NULL){
		 	printf("Item not found");
		 	return;
		}
		printf("\nGiven element is at position : %d",current);
}

void sortedAdd(node *newnode){
	node *ptr;
	ptr = head;
	if(head == NULL){
		head = newnode;	
		return;
	}
	while(ptr != NULL && ptr->data < newnode->data){
		  	ptr  = ptr->next;
	}
	if(ptr == NULL){
		add_end(newnode);
	}
	else{
	add_before(newnode,ptr->data);
	}
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


