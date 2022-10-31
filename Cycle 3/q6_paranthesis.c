#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "stack.h"


void checkBalanced(char exp[]){
	int i = 0;
	while(exp[i] != '\0'){
		if(exp[i] == '('){
			push(exp[i]);
		}
		else if(exp[i] == ')'){
			if(tos == -1){
				printf("Not balanced");
				exit(0);
			}
			pop();
		}
		i++;
	}
	if(tos != -1){
		printf("Not balanced");
		exit(0);
	}
}

void main(){
	int item;
	char exp[100];
	printf("Enter Expression: ");
	gets(exp);
	n = strlen(exp);
	stack = (int*) calloc(n,sizeof(int));
	checkBalanced(exp);
	printf("Balanced");
}
