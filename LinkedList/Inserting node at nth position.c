#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* first = NULL;


// CREATING A LINKED LIST
void createnode(int a[], int n)
{
    struct node* t, *last;
    first = (struct node*)malloc(sizeof(struct node));
    (*first).data = a[0];
    first->next = NULL;
    last = first;
    
    for(int i=1; i < n; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
// DISPLAY FUNCTION

void display()
{
    struct node* p = first;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p = p->next;
    }
    printf("\n");
}

//insert node
void insert(int pos)
{
    if(pos == 0)
    {
        struct node* t;
        t = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        int data;
        scanf("%d",&data);
        t->data = data;
        if(first!=NULL)
        t->next = first;
        else
            t->next = NULL;
        first = t;
    }
    else
    {
        struct node* p = first;
        for(int i = 1; i < pos; i++)
            p = p->next;
        struct node* t;
        t = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data: ");
        int data;
        scanf("%d", &data);
        t->data = data;
        t->next = p->next;
        p->next = t;
    }
}

int main()
{
    int a[]={10, 20, 30, 40};
    createnode(a, 4);
    
    int pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    insert(pos);
    display();
}
