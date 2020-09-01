#include <iostream>
using namespace std;
class Node {
public:
   int data;
   struct Node *next;
}*first = NULL;
Node* p = NULL;
Node* head = NULL;
Node* tail;
void createodd(int data, int i)
{
    if(i % 2 == 1)
    {
        //head = new Node();
        p = new Node();
        p->data = data;
        p->next = head;
        
        head = p;
    }
    else
    {
        p = new Node();
        p->data = data;
        p->next = NULL;
        if(head->next == NULL)
        head->next = p;
        else
        {tail->next = p;}
        tail = p;
        
    }
    display(head);
    
}
int count()
{
    struct Node* p = head;
    int c = 0;
    while(p)
    {
        c++;
        p = p->next;
    }
    return c;
}

void lastfourth()
{
    Node* p = head;
    if(p == NULL || p->next == NULL || p->next->next == NULL || p->next->next->next == NULL)
        return;
//    if(p->next != NULL && p->next->next != NULL && p->next->next->next == NULL)
//        return;
    while(p->next != NULL && p->next->next != NULL && p->next->next->next != NULL && p->next->next->next->next != NULL)
    {
        p = p->next;
    }
    cout << endl;
    cout << "Last one-fourth element is: ";
    cout << p->data << " ";
}

void onefourth()
{
    int c = count() / 4;
    Node* p = head;
    for(int i = 1;i <= c; i++)
    {
        p = p->next;
    }
    cout << "One-fourth of a linked list is: " << p->data << endl;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int a[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
            createodd(a[i], i);
    }
    lastfourth();
    onefourth();
}
