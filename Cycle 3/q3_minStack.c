#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 100

int *stack,min[MAX_SIZE],tos=-1,mintos=-1,n,option,element;

void push(int item){
	if(tos == n-1){
		printf("Stack Overflow");
		exit(0);	
	}
	else{
	 	stack[++tos]=item;
	 	if(mintos == -1 || min[mintos] > item){
	 		min[++mintos] = item;
	 	}
	}
}


int pop(){
	if(tos < 0){
		printf("Stack Underflow");
		exit(0);
	}
	else{
        int element = stack[tos--];
		if(min[mintos] == element){
			mintos--;
		}
	 	return element;
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
}

void main(){
	char c;
	printf("Enter number of elements of stack 1:");
	scanf("%d",&n);
	stack = (int*) calloc(n,sizeof(int));
	while (1)
    	{
        printf("Enter option to continue:\n1.Push\n2.Pop\n3.Display\n4.MinElement\n");
        scanf("%d", &option);
        if (option == 1)
        {
            while (1)
            {
                printf("Enter element to push to Stack: ");
                scanf("%d", &element);
                push(element);
                getchar();
                printf("Enter c to continue , m for main menu , e to end: ");
                c = getchar();
                if (c == 'c')
                {
                    continue;
                }
                else if (c == 'm')
                {
                    break;
                }
                else
                {
                    printf("Ending MultiStack");
                }
            }
        }
        else if (option == 2)
        {
            while (1)
            {
                printf("Enter Popped element: ");
                printf("%d",pop());
                getchar();
                printf("Enter c to continue , m for main menu , e to end: ");
                c = getchar();
                if (c == 'c')
                {
                    continue;
                }
                else if (c == 'm')
                {
                    break;
                }
                else
                {
                    printf("Ending Stack");
                }
            }
    	}
        else if(option == 3){
            display();
        }
    	else{
    	        if(mintos == -1){
    	         printf("No elements in stack\n");
    	         continue;
    	        }
    		printf("Current minimum element is: %d\n\n",min[mintos]);
    	}
 }
}
