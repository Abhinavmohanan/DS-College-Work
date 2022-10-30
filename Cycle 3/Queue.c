#include <stdio.h>
#include <stdlib.h>

int front = -1, rear = -1, size;

typedef struct
{
    int num;
} queue;

void enQueue(queue q[], int val)
{

    if (front == rear && front != -1)
    {

        printf("Queue Overflow");
        exit(0);
    }
    else
    {
        rear++;
        rear = rear % size;
        q[rear].num = val;
    }
}

int deQueue(queue q[])
{
    if (front == rear)
    {
        printf("Queue Underflow");
        exit(0);
    }
    else
    {
        front++;
        front = front % size;
        return q[front].num;
    }
}

void main()
{
    int option, element;
    char c;
    printf("Enter size of queue");
    scanf("%d", &size);
    queue *q = (queue *)calloc(size, sizeof(queue));
    while (1)
    {
        printf("Enter option to continue:\n1.enQueue\n2.deQueue\n");
        scanf("%d", &option);
        if (option == 1)
        {
            while (1)
            {
                printf("Enter element to push to queue: ");
                scanf("%d", &element);
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
                    printf("Ending Queuing see ya later homie! ");
                }
            }
        }
        else if (option == 2)
        {
            while (1)
            {
                printf("Enter Popped element: ");
                printf("%d",deQueue(q));
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
                    printf("Ending Queuing see ya later homie! ");
                }
            }
        }
    }
}