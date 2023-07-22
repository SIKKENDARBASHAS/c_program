#include<stdio.h>
#include<stdlib.h>
struct sk
{
    int data;
    struct sk*next;
}*head,*nextnode,*temp,*newnode;
int main()
{
    insert();
    middle();
    display();
}
void insert()
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
}
void middle()
{
    temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    newnode=(struct sk*)malloc(sizeof(struct sk));
    printf("enter the elements:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    for(int i=1;i<count/2;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}

