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
int main()
{
    struct node *start = NULL;
    int choice, data, pos;
    while(1)
    {
        printf("------------ MENU ------------\n");
        printf("1.Create list\t\t6.Add at end\n");
        printf("2.Display\t\t7.Add at position\n");
        printf("3.Count\t\t8.Delete\n");
        printf("4.Search\t\t9.Reverse\n");
        printf("5.Add to empty list\t\t10.Quit\n");
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
    return 0;
}
struct node *create_list(struct node *start) {
    int i, n, data;
    printf("Enter the no.of nodes:");
    scanf("%d", &n);
    start = NULL;
    if(n == 0)
    {
        return start;
    }
    printf("Enter the element to be inserted:");
    scanf("%d", &data);
    start = addatbeg(start, data);
    for(i = 1; i < n; i++)
    {
        printf("Enter the element to inserted:");
        scanf("%d", &data);
        start = addatend(start, data);
    }
    return start;
}
void display(struct node *start)
{
    if(start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *p = start;
    printf("List is:");
    while(p != NULL)
    {
        printf("%d\t", p -> info);
        p = p -> link;
    }
    printf("\n");
} 
void count(struct node *start)
{
    struct node *p = start;
    int cnt = 0;
    while(p != NULL)
    {
        p = p -> link;
        cnt++;
    }
    printf("The no.of elements are:%d\n", cnt);
}
void search(struct node *start, int data)
{
    struct node *p = start;
    int pos = 1;
    while(p != NULL)
    {
        if(p -> info == data)
        {
            printf("Item %d found at position %d\n", data, pos);
            return;
        }
        p = p -> link;
        pos++;
    }
    printf("Item %d not found in list\n", data);
}
struct node *addatbeg(struct node *start, int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp -> info = data;
    tmp -> link = start;
    start = tmp;
    return start;
}
struct node *addatend(struct node *start, int data)
{
    struct node *tmp, *p = start;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp -> info = data;
    while(p -> link != NULL)
    {
        p = p -> link;
    }
    p -> link = tmp;
    tmp -> link = NULL;
    return start;
}
struct node *addatpos(struct node *start, int data, int pos)
{
    struct node *tmp, *p = start;
    int i;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp -> info = data;
    if(pos == 1)
    {
        tmp -> link = start;
        start = tmp;
        return start;
    }
    for(i = 2; i < pos - 1 && p != NULL; i++)
    {
        p = p -> link;
    }
    if(p == NULL)
    {
        printf("There are less than %d elements\n", pos);
    }
    else
    {
        tmp -> link = p -> link;
        p -> link = tmp;
    }
    return start;
}
struct node *del(struct node *start, int data)
{
    struct node *tmp, *p;
    p = start;
    if(start == NULL)
    {
        printf("List is empty\n");
        return start;
    }
    if(start -> info == data)
    {
        tmp = start;
        start = start -> link;
        free(tmp);
        return start;
    }
    while(p -> link != NULL)
    {
        if(p -> link -> info == data)
        {
            tmp = p -> link;
            p -> link = tmp -> link;
            free(tmp);
            return start;
        }
        p = p -> link;
    }
    printf("Element %d not found\n", data);
    return start;
}
struct node *reverse(struct node *start)
{
    struct node *prev, *ptr, *next;
    prev = NULL;
    ptr = start;
    while(ptr != NULL)
    {
        next = ptr -> link;
        ptr -> link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    return start;
}