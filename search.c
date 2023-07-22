#include<stdio.h>
#include<stdlib.h>
struct sk
{
    int data;
    struct sk*next;
}*head,*next,*temp,*newnode;
int main()
{
    insert();
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
    int a;
    printf("enter the search element :");
    scanf("%d",&a);
    temp=head;
    while(temp!=NULL)
    {
        if(a==temp->data)
        {
            printf(" found");
            break;
        }
        else
        {
            printf("  not found");
            break;
        }
    }
}


