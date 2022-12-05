#include<stdio.h>
#include<stdlib.h>

int front=-1,rear=-1,max,*queue;

//Add element to end of queue
void enqueue(int data){
	if(front == -1){
		front = 0;
		rear = 0;
		queue[rear] = data;
	}
	else if(rear == max-1){
		printf("Queue overflow");
	}
	else{
		queue[++rear] = data;
	}
}

//Delete element from front of queue
void dequeue(){
	int removed;
	if(front == -1){
		printf("Queue underflow");
	}
	else if (front == rear){
		removed = queue[front];
		front = -1;
		rear = -1;
		printf("Removed element is : %d",removed);
	}
	else{
		printf("Removed element is : %d",queue[front++]);
	}
}\

//Display queue
void display(){
	int i = front,j=rear;
	if(front == -1){
		printf("Queue underflow");
		return;
	}
	while(i <= j){
		printf("%d ",queue[i++]);
	}
}

void main(){
	int option,data,removed;
	printf("Enter max size of array: ");
	scanf("%d",&max);
	queue = (int*)calloc(max,sizeof(int));
	do{
		printf("\nEnter option to continue\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		scanf("%d",&option);
		switch(option){
		case 1:	printf("Enter number: ");
			scanf("%d",&data);
			enqueue(data);
			break;
		case 2: dequeue();
			break;
		case 3: display();
			break;
		case 4: printf("Exiting....");
			break;
		default: printf("Enter valid option");	
		}
	}while(option != 4);
}
