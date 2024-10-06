#include<stdio.h>
void push();
void pop();
void disp();
#define MAX 100
int top=-1;
int stack[MAX];
int main( )
    {
        int ch;
                   do
        {
        printf("\n--MENU---\n1.push\n2.pop\n3.display\n4.exit\n");
                    printf("---------\n");
            printf("Enter your choice :");
            scanf("%d",&ch);
            switch(ch)
            {
                  case 1: push();
                      break;
                  case 2: pop();
                      break;
                  case 3: disp();
                      break;
                  
            }

        }while(ch!=4);
    }
void push()
    {
        int n;
        if(top==MAX-1)
        printf("stack overflow\n");
        
else
        {
            printf("Enter the Element to Push:");
            scanf("%d",&n);
            stack[++top]=n;
        }
        
    }
void disp()
    {
        int i;
        if(top==-1)
        {
            printf("stack underflow\n");
        }
else
        {
            printf("\nelements of a stack are:\n");
            for(i=top;i>=0;i--)
            printf("%d\t",stack[i]);
        }
        
    }

void pop()
    {
        int i;
        if(top<0)
            printf("stack underflow\n");
        else
        {
            i=stack[top--];
            printf("\npopped element from a stack is : %d",i);
        }
        
    }