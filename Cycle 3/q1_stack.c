#include<stdio.h>
#include<stdlib.h>
#include "stack.h"

void main(){
	int item;
	char e;
	printf("Enter no. of elements of stack: ");
	scanf("%d",&n);
	stack = (int*) calloc(n,sizeof(int));
	printf("Enter elements separated by enter key , Enter 'e' after finishing \n");
	while(e != 'e'){
	  scanf("%d",&item);
	  push(item);
	  e = getchar();
	}
	printf("%d",pop());
}
