#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode;
void create()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
    }
    else
    {
     temp->next=newnode;
     temp=temp->next;
     temp->next=head;
    }
}
void display()
{
    temp=head;
    while(temp!=head)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
