//HOW TO CREATE A TREE

#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root = NULL;

struct queue
{
    struct node** Q;
    int front, rear, size;
}q;

void createqueue()
{
    q.front = q.rear = 0;
    printf("Enter the size of the queue: ");
    scanf("%d", &q.size);
    q.Q = (struct node**)malloc(q.size*sizeof(struct node*));
}

//function for enquing the data in queue of node type address
void enqueue(struct queue* q, struct node* data )
{
    if((q->rear+1)%q->size == q->front)
        printf("\nThe queue size is full");
    else
    {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = data;
    }
}

//function for deleting the node address type from queue
struct node* dequeue(struct queue* q)
{
    struct node* x = NULL;
    if(q->rear == q->front)
        return x;
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

void pre(struct node* q)
{
    if(q!=NULL)
    {
        printf("%d ",q->data);
        pre(q->lchild);
        pre(q->rchild);
    }
    
}

int main()
{
    createqueue();
    int x;
    struct node* p, *t;
    root = (struct node*)malloc(sizeof(struct node));
    root->lchild = NULL;
    root->rchild = NULL;
    printf("\nEnter the root value: ");
    scanf("%d",&x);
    root->data = x;
    enqueue(&q, root);
    while(!(q.front == q.rear))
    {
        p = dequeue(&q);
        printf("\nEnter the left child of %d: ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t = (struct node*)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("\nEnter the right child of %d: ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t = (struct node*)malloc(sizeof(struct node));
            t->data = x;
            t->lchild = NULL;
            t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
    printf("\nThe preorder traversal of this tree is: ");
    pre(root);
    printf("\n");
    
}
