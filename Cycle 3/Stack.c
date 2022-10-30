#include<stdio.h>
#include<stdlib.h>
#include "Stack.h"


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