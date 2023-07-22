#include<stdio.h>
#include<stdlib.h>
struct sk
{
    int data;
    struct sk*next;
}*head,*nextnode,*temp,*newnode;
int main()
{
int size;
printf("enter the size: ");
scanf("%d",&size);
for(int i=0;i<size;i++)
{
    newnode=(struct sk*)malloc(sizeof(struct sk));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
    head=temp=newnode;
    }
    else
    {
       temp->next=newnode;
       temp=newnode;
    }
}
        temp=head;
        int count=0;
        while(temp!=NULL)
        {
        count++;
        temp=temp->next;
        }
        printf("count is :%d",count);
}
