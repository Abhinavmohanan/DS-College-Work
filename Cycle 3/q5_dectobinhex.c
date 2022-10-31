#include<stdio.h>
#include<stdlib.h>
#include "stack.h"


void convTobin(int num){
	while(num!=0){
		push(num%2);
		num /= 2;
	}
}

void convTohex(int num){
	while(num!=0){
		push(num%16);
		num /= 16;
	}
}

void displaybin(){
	if(tos < 0){
		printf("Stack Underflow");
		exit(0);
	}
	while(tos >= 0){
	 printf("%d",pop());
	}
	printf("\n");
}

void displayhex(){
	if(tos < 0){
		printf("Stack Underflow");
		exit(0);
	}
	while(tos >= 0){
	 printf("%X",pop());
	}
	printf("\n");
}


void main(){
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	n=100;
	stack = (int*) calloc(n,sizeof(int));
	convTobin(num);
	displaybin();
	convTohex(num);
	displayhex();
}
