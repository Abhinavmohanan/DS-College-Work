#include<stdio.h>
#include<ctype.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}
void postfix(char *c)
{
    int n1,n2,n3,num;
    while(*c != '\0')
    {
        if(isdigit(*c))
        {
            num = *c - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*c)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        c++;
    }
    printf("\nResult =  %d\n\n",pop());
}
int main()
{
    char exp[20];
    char *e;
    printf("Enter postfix expression : ");
    scanf("%s",exp);
    e = exp;
    postfix(e);
    return 0;
}