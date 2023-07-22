#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct Node
{
   char data;
   struct Node* next;
} Node;
void reverse(Node** head, Node* start, Node* end)
{
   Node* current = start;
   Node* prev = NULL;
   Node* next = NULL;
   while (current != end)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
   if (prev)
   {
      prev->next = end;
   }
   else
    {
      *head = end;
    }
   start->next = current;
}
void reverseWords(Node** head)
{
   Node* current = *head;
   Node* start = NULL;
   Node* end = NULL;
   while (current != NULL)
    {
      if (isspace(current->data))
      {
         if (start)
         {
            reverse(head, start, end);
            start = NULL;
            end = NULL;
         }
      }
        else
        {
         if (!start)
        {
            start = current;
        }
         end = current;
      }
      current = current->next;
   }
   if (start)
   {
      reverse(head, start, end);
   }
}
void insert(Node** head, char data)
{
   Node* new_node = (Node*) malloc(sizeof(Node));
   new_node->data = data;
   new_node->next = *head;
   *head = new_node;
}
void printList(Node* node)
{
   while (node != NULL)
    {
      printf("%c", node->data);
      node = node->next;
   }
   printf("\n");
}
int main()
{
   Node* head = NULL;
   char string[] = "Hello, hii";
   int len = strlen(string);
   for (int i = 0; i < len; i++)
    {
      insert(&head, string[i]);
   }
   printf("Original string: ");
   printList(head);
   reverseWords(&head);
   printf("Reversed words: ");
   printList(head);
   return 0;
}
