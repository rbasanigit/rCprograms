#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node * link;
};
struct node *create_list(struct node *start);
void display(struct node *start);
void count(struct node *start);
void search(struct node *start, int data);
struct node *addatbeg(struct node *start, int data);
struct node *addatend(struct node *start, int data);
struct node *addatpos(struct node *start, int data, int pos);
struct node *del(struct node *start, int data);
struct node *reverse(struct node *start);
void main()
{
    struct node *start = NULL;
    int choice, data, pos;
    while(1)
    {
        printf("------------ MENU ------------\n");
        printf("1.Create list\t\t\t\t6.Add at end\n");
        printf("2.Display\t\t\t\t7.Add at position\n");
        printf("3.Count\t\t\t\t8.Delete\n");
        printf("4.Search\t\t\t\t9.Reverse\n");
        printf("5.Add to empty list\t\t\t\t10.Quit\n");
        printf("enter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:start = create_list(start);
            break;
            case 2:display(start);
            break;
            case 3:count(start);
            break;
            case 4:printf("enter element to search:");
            scanf("%d", &data);
            search(start, data);
            break;
            case 5:printf("enter element to insert:");
            scanf("%d", &data);
            start = addatbeg(start, data);
            break;
            case 6:printf("enter element to insert at end:");
            scanf("%d", &data);
            start = addatend(start, data);
            break;
            case 7:printf("enter element to insert:");
            scanf("%d", &data);
            printf("enter the position to insert at:");
            scanf("%d", &pos);
            start = addatpos(start, data, pos);
            break;
            case 8:printf("enter element to be deleted:");
            scanf("%d", &data);
            start = del(start, data);
            break;
            case 9:start = reverse(start);
            break;
            case 10:exit(1);
            default:printf("wrong choice!!!!!!!");
        }
    }
}
struct node *create_list(struct node *start) {
    int i, n, data;
}