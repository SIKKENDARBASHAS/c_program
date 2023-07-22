#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
int top=-1,stack[SIZE],elements;
int main()
{
   pop();
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

