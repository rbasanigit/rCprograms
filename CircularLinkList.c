#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head;
void createlist(int n);
void displaylist();
void insertatbeg(int data);
void deleteatbeg();
int main()
{
    int n, data, choice = 1;
    head = NULL;
    while(choice != 0)
    {
        printf("\n---------- MENU ----------\n");
        printf("1. Create list\n");
        printf("2. Insert at beginning\n");
        printf("3. Delete at beginning\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter the number of nodes: ");
                scanf("%d", &n);
                createlist(n);
                displaylist();
                break;
            case 2:
                printf("Enter data to be inserted at the beginning: ");
                scanf("%d", &data);
                insertatbeg(data);
                displaylist();
                break;
            case 3:
                if(head == NULL)
                {
                    printf("List is empty\n");
                }
                else
                {
                    deleteatbeg();
                    displaylist();
                }
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!!!\n");
        }
    }
    return 0;
}
void createlist(int n)
{
    int i, data;
    struct node *prevnode, *newnode;
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("Data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = head;  
        prevnode = head;
        for(i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf("Data of node %d: ", i);
            scanf("%d", &data);
            newnode->data = data;
            newnode->next = head;  
            prevnode->next = newnode;
            prevnode = newnode;
        }
    }
}
void displaylist()
{
    struct node *current;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        current = head;
        printf("List is:\n");
        do
        {
            printf("%d\t", current->data);
            current = current->next;
        } while(current != head);
        printf("\n");
    }
}
void insertatbeg(int data)
{
    struct node *newnode, *current;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = head;  
        current = head;
        while(current->next != head)
        {
            current = current->next;
        }
        current->next = newnode; 
        head = newnode;  
        printf("Element %d is inserted at beginning\n", data);
    }
}
void deleteatbeg()
{
    struct node *temp, *s;
    if(head == head->next)  
    {
        printf("Element %d is deleted, list is now empty\n", head->data);
        free(head);
        head = NULL;
    }
    else
    {
        temp = head;
        s = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        printf("Element %d is deleted at the beginning\n", s->data);
        head = s->next;  
        temp->next = head;  
        free(s);  
    }
}
