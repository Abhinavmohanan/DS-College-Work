#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int key;
}element;

int n,tos=-1;

void push(element stack[],int item){
	element temp;
	temp.key = item;
	if(tos == n-1){
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