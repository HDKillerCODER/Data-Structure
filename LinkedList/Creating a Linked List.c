//
//  main.c
//  C Queue
//
//  Created by Harsh kumar on 18/06/20.
//  Copyright © 2020 Harsh kumar. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>

// Creating a node type structure having
// 1.  Data
// 2.  pointer to next node
struct node
{
    int data;
    struct node* next;
}*first = NULL;
void create(int a[], int n)
{
    struct node *t, *last;
    first = (struct node*)malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
    last = first;
    for(int i = 1; i < n; i++)
    {
        t = (struct node*)malloc(sizeof(struct node));
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display()
{
    struct node* p = first;
    printf("The node elements are: ");
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    create(a, 6);   // creating a linked list of size 6
    display();
}
