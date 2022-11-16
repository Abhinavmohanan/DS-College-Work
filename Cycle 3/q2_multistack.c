#include<stdio.h>
#include"stack.h"



void push2(int item){
	if(tos2 == m+n-1){
		printf("Stack Overflow");
		exit(0);	
	}
	else{
	 	stack[++tos2]=item;
	}
}


int pop2(){
	if(tos2 < m){
		printf("Stack Underflow");
		exit(0);
	}
	else{
	 	return stack[tos2--];
	}
}



void main(){
	int option,element;
	char c;
	printf("Enter number of elements of stack 1:");
	scanf("%d",&n);
	printf("Enter number of elements of stack 2:");
	scanf("%d",&m);
	stack = (int*) calloc(m+n,sizeof(int));
	tos2 = n-1;
	 while (1)
    	{
        printf("Enter option to continue:\n1.Push\n2.Pop\n");
        scanf("%d", &option);
        if (option == 1)
        {
            printf("Enter option to continue:\n1.Stack 1 \n2.Stack 2\n");
            scanf("%d", &option);
            if(option == 1){
            while (1)
            {
                printf("Enter element to push to Stack 1: ");
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
            else{
            while (1)
            {
                printf("Enter element to push to Stack 2: ");
                scanf("%d", &element);
                push2(element);
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
        }
        else if (option == 2)
        {
            printf("Enter option to continue:\n1.Stack 1 \n2.Stack 2\n");
            scanf("%d", &option);
            if(option == 1){
            while (1)
            {
                printf("Popped element: ");
                printf("%d",pop());
                getchar();
                printf("\n");
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
            else{
            while(1)
            {
            	printf("Popped element: ");
                printf("%d",pop2());
                printf("\n");
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
    }
}
}
