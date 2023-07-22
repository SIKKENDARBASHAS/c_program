#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int top = -1,stack[SIZE],elements;
int main()
{
    push();
    pop();
    peek();
    display();
}
void push()
{
    int size;
    printf("enter the size :");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        if(top==size-1)
        {
            printf("overflow");
        }
        else
        {
            scanf("%d",&elements);
            top++;
            stack[top]=elements;
        }
    }
}
void pop()
{
   int size;
    printf("enter the size :");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        if(top==-1)
        {
            printf("\n underflow\n");
        }
        else
        {
            elements=stack[top];
            top--;
            printf("%d\n",elements);
        }
    }
}
void peek()
{
    printf("%d element in top:\n",stack[top]);
}
void display()
{
    if (top ==-1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements in stack\n");
        for (int i = top; i>=0;--i)
            printf("%d\n", stack[i]);
    }
}
