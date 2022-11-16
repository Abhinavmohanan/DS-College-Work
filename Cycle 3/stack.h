#include<stdio.h>
#include<stdlib.h>


int *stack,tos=-1,tos2,m,n;;

void push(int item){
	if(tos == n-1){
		printf("Stack Overflow");
		exit(0);	
	}
	else{
	 	stack[++tos]=item;
	}
}


int pop(){
	if(tos < 0){
		printf("Stack Underflow");
		exit(0);
	}
	else{
	 	return stack[tos--];
	}
}


void display(){
	if(tos < 0){
		printf("Stack Underflow");
		exit(0);
	}
    	int n = tos;
	while(n >= 0){
	 printf("%d ",stack[n--]);
	}
	printf("\n");
}
