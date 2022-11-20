#include<stdio.h>
#include<stdlib.h>

int *stack,tempstack[100],temptos=-1,tos=-1,n;

void push(int item){
	if(tos == n-1){
		printf("Stack Overflow");
	}
	else{
		while(item<stack[tos] && tos!= -1){
			tempstack[++temptos] = stack[tos--];
		}
		stack[++tos] = item;
		while(temptos >-1){
			stack[++tos] = tempstack[temptos--];
		}
	}
}


int pop(){
	if(tos < 0){
		printf("Stack Underflow");
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

void main(){
	int option,element;
	char c;
	printf("Enter number of elements of stack :");
	scanf("%d",&n);
	stack = (int*) calloc(n,sizeof(int));
	while (1)
    	{
        printf("Enter option to continue:\n1.Push\n2.Pop\n3.Display\n");
        scanf("%d", &option);
        if (option == 1)
        {
            while (1)
            {
                printf("Enter element to push to Stack: ");
                scanf("%d", &element);
                push(element);
                getchar();
                printf("Enter c to continue , m for main menu , e to end");
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
                printf("Enter c to continue , m for main menu , e to end");
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
	}
}
