#include<stdio.h>
#include<stdlib.h>

int n,tos=-1;

typedef struct{
  int key;
}element;


void push(element stack[],int item){
	element temp;
	temp.key = item;
	if(tos == n){
		printf("Stack Overflow");
		exit(0);	
	}
	else{
		tos++;
	 	stack[tos]=temp;
	}
}


element pop(element stack[]){
	if(tos < 0){
		printf("Stack Underflow");
		exit(0);
	}
	else{
	 	return stack[tos--];
	}
}

void main(){
	int item;
	char e	;
	printf("Enter no. of elements of stack: ");
	scanf("%d",&n);
	element *stack;
	stack = (element*) calloc(n,sizeof(element));
	printf("Enter elements separated by enter key , Enter 'e' after finishing \n");
	while(e != 'e'){
	  scanf("%d",&item);
	  push(stack,item);
	  e = getchar();
	}
	printf("%d",pop(stack).key);
}
