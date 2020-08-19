#include <iostream>
using namespace std;
class Node {
public:
   int data;
   struct Node *next;
}*first = NULL;


void create(int a[], int n)
{
    if(n <= 0)
    {
        cout << "No linked list can be created\n";
    }
    else
    {
        first = new Node();
    first->data = a[0];
    first->next = NULL;
    Node* t, *last;
    last = first;
    for(int i = 1; i < n; i++)
    {
        t = new Node();
        t->data = a[i];
        t->next = NULL;
        last -> next = t;
        last = t;
    }
    }
    
}

// function for displaying the elements
void display()
{
    Node* p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<"\n";
}

int count()
{
    struct Node* p =first;
    int c = 0;
    while(p)
    {
        c++;
        p = p->next;
    }
    return c;
}

void insertsorted(int data)
{
    Node* p = first, *prev = NULL;
    while(p->data <= data)
    {
        prev = p;
        p = p->next;
        if(p == NULL)
        {
            break;
        }
    }
    Node* t = new Node();
    t->data = data;
    if(prev != NULL)
    prev->next = t;
    else
    {
        t->next = p;
        first = t;
        return;
    }
    t->next = p;
}

int main()
{
    int a[] = {1, 1, 2, 3, 4, 4, 7};
    create(a, 7);
    display();
    insertnode(0);
    insertnode(2);
    insertnode(4);
    insertsorted(5);
    insertsorted(10);
    display();

}
