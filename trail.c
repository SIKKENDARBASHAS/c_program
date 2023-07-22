#include<stdio.h>
#include<stdlib.h>
struct sk
{
    int data;
    struct * new;
}*head,*nextnode,*new,*temp,*next;
int main()
{
    int choice;
    while (1) {
        printf("\1. insertion at"
               " starting\n");
        printf("\t3  For insertion at"
               " end\n");
        printf("\t4  For insertion at "
               "any position\n");
        printf("\t5  For deletion of "
               "first element\n");
        printf("\t6  For deletion of "
               "last element\n");
        printf("\t7  For deletion of "
               "element at any position\n");
        printf("\t8  To find maximum among"
               " the elements\n");
        printf("\t9  To find mean of "
               "the elements\n");
        printf("\t10 To sort element\n");
        printf("\t11 To reverse the "
               "linked list\n");
        printf("\t12 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            traverse();
            break;
        case 2:
            insertAtFront();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAtPosition();
            break;
        case 5:
            deleteFirst();
            break;
        case 6:
            deleteEnd();
            break;
        case 7:
            deletePosition();
            break;
        case 8:
            maximum();
            break;
        case 9:
            mean();
            break;
        case 10:
            sort();
            break;
        case 11:
            reverseLL();
            break;
        case 12:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
void insert()
{
    int size;
    printf("ENTER THE SIZE:");
    scanf("%d",&size);
    for(int i=1;i<size;i++)
    {
        new=(struct sk*)malloc(sizeof(struct sk));
        scanf("%d",new->data);
        new->next=NULL;
        if(head==NULL)
        {
            head=temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
    }
}
void insertfirst()
{
    printf("\nELEMENT TO BE INSERTED:");
    new=(struct sk*)malloc(sizeof(struct sk));
    scanf("%d",new->data);
    new->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    temp->next=new;

}
