#include<stdio.h>
char stack[100];
int top=-1;
void push(char x)
{
    stack[top++]=x;
}
char pop()
{
    if(top==-1)
        return -1;
    else
        return stack[top=--];

}
int match(char c1,char c2)
{
    if(c1==')'&&c2=='(')
    {
        return 1;
    }
    else if(c1==']'&&c2=='[')
    {
        return 1;
    }
    else if(c1=='}'&&c2=='{')
    {
        return 1;
    }
    else{
        return 0;
    }

}
int main()
{
    char [100];
    printf("enter exp: ");
    scanf("%s",&*e);
}
