#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next,*prev;
};
struct node*new,*temp,*head,*tail;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int val;
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        new->data=val;
        new->next=NULL;
        new->prev=NULL;
        if(head==NULL)
        {
            head=new;
            tail=new;
        }
        else
        {
            tail->next=new;
            new->prev=tail;
            tail=new;
            tail->next=NULL;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
       if(temp->data%2!=0)
       {
           temp=temp->next;
       }
       else
       {
           new->prev=temp->next;
           next->temp=prev;
           temp=prev;
           prev=head;
       }
    }
}

