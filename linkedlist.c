#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*node;
};*head,*tail=NULL;
void addnode(int data)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
    }
    else
    {
     tail->next=newnode
     tail=newnode
    }
}
void sort()
{
    struct node*current=head,*index=NULL;
    int temp;
    while(current!=NULL)
    {
        if(current->data>index->data)
        {
            temp=current->data
            current->data=index->data
            index->data=temp
        }
        index=index->next
    }
    current=current->next
}
void display()
{
    struct node *current = head;
    if(head == NULL)
        {
        printf("List is empty \n");
        return;
        }
    while(current != NULL)
        {
        printf("%d ", current->data);
        current = current->next;
        }
    printf("\n");
}
int main()
{
    addNode(98)
    addNode(25)
    addNode(62)
    addNode(54)
    addNode(85)
    printf("original value:");
    display();
    sort();
    printf("sorted element:");
    display();
    return 0;
}
