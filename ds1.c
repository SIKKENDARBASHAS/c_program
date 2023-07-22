#include<stdio.h>
#include<stdlib.h>
struct sk
{
    int data;
    struct sk*next;
}*head,*newnode,*temp,*tail,*pre;
int main()
{
    insert();
    display();
    insertfront();
    display();
    insertend();
    display();
    deletefront();
    display();
    deletelast();
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
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void insertfront()
{
    printf("\ninsert the element to be inserted in front :");
    newnode=(struct sk*)malloc(sizeof(struct sk));
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertend()
{
    printf("\ninsert the element to be inserted in end :");
    newnode=(struct sk*)malloc(sizeof(struct sk));
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    temp=newnode;
}
void deletefront()
{
    printf("\n delete first element:");
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
    }
void deletelast()
{
    printf("\ndelete last element:");
    temp=head;
    pre=temp;
        while(temp->next!=NULL)
        {
            pre=temp;
            temp=temp->next;
        }
        pre->next=NULL;
        free(temp);
}


