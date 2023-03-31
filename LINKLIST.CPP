#include <iostream.h>
#include<malloc.h>
#include<conio.h>
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) //insert at beging
{
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display()
{
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL)
   {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
void main() {
   clrscr();
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   getch();
}
