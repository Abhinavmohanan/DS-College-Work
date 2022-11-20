#include<stdio.h>
#include<stdlib.h>

int *stack,tos=-1,tos2,m,n;;

void push(int item){
	if((tos+1) == tos2){
		printf("Stack Overflow\n");
	}
	else{
	 	stack[++tos]=item;
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


void display1(){
	if(tos < 0){
		printf("Stack Underflow");
	}
    int x = tos;
	while(x >= 0){
	 printf("%d ",stack[x--]);
	}
	printf("\n");
}


void display2(){
	if(tos2 >= m+n){
		printf("Stack Underflow");
	}
    int x = tos2;
	while(x < m+n){
	 printf("%d ",stack[x++]);
	}
	printf("\n");
}

void push2(int item){
	if(tos2 == (tos+1)){
		printf("Stack Overflow");	
    }
	else{
	 	stack[--tos2]=item;
	}
}


int pop2(){
	if(tos2 == m+n){
		printf("Stack Underflow");
	}
	else{
	 	return stack[tos2++];
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
	tos2 = n+m;
	 while (1)
    	{
        printf("Enter option to continue:\n1.Push\n2.Pop\n3.Display\n");
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
        else if(option == 3){
            printf("Enter option to continue:\n1.Stack 1 \n2.Stack 2\n");
            scanf("%d", &option);
            if(option == 1){
                display1();
            }
            else if(option == 2){
                display2();
            }
            else{
                printf("Enter Proper Option");
                continue;
            }
        }
        else{
            printf("Enter correct option !");
        }
}
}
