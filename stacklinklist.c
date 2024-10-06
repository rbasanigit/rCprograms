#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node * link;
}*top = NULL;
int isEmpty()
{
if(top == NULL)
return 1;
else
return 0;
}
void push(int data)
{
    struct node *newnode;
    newnode=malloc(sizeof(newnode));
    if(newnode == NULL)
    {
      printf("stack underflow");
      exit(1);
    }
    newnode->data=data;
    newnode->link=NULL;
    newnode->link=top;
    top=newnode;
}
int pop()
{
    struct node *temp;
    int val;
    if(isEmpty())
    {
      printf("stack underflow");
      exit(1);
    }
    temp = top;
    val = temp->data;
    top = top->link;
    free(temp);
    temp = NULL;
    return val;
}
int peek()
{
   
    return top->data;
}
void print()
{
    struct node* temp;
    temp = top;
    if(isEmpty())
    {
      printf("stack underflow");
      exit(1);
    }
    printf("\nThe stack elements are : \n");
    while(temp)
    {
        printf("%d\t",temp->data);
        temp = temp->link;
    }
    printf("\n");
}
int main()
{
    int choice,data;
    while(1)
    {
        printf("\n");
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.PRINT TOP OF THE  ELEMENT\n");
        printf("4.PRINT ALL THE ELEMENTS\n");
        printf("5.QUIT\n");
        printf("ENTER YOUR CHOICE\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("enter the element to push\n");
            scanf("%d",&data);
            push(data);
            break;
            case 2:
            data = pop();
            printf("deleted element is %d\n",data);
            break;
            case 3:
            printf("top element %d\n",peek());
            break;
            case 4:
            print();
            break;
            case 5:
            exit(1);
            default:
            printf("wrong choice\n");
            
        }
    }
     return 0;
}