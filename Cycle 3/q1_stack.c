#include<stdio.h>
#include<stdlib.h>
#include "stack.h"


void main(){
	char c;
	int option,element;
	printf("Enter number of elements of stack : ");
	scanf("%d",&n);
	stack = (int*) calloc(n,sizeof(int));
	while (1)
    	{
        printf("Enter option to continue:\n1.Push\n2.Pop\n3.display\n");
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
                    printf("Ending Stack");
                }
            }
    	}
        else if(option == 3){
            display();
        }
    	else{
    	     printf("Enter proper option");
    	}
 }
}
