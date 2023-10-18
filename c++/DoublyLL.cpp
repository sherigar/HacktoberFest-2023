#include <iostream>
using namespace std;
class Node
{
public:
    Node *previous;
    int data;
    Node *next;
};
Node *Insert(int pos,int x, Node *head)
{
     Node *t,*p;
     if(pos ==0)
     {
        t=new Node;
        t->data=x;
        t->previous=NULL;
        t->next=head;
        if(head !=NULL)
        head->previous=t;
        head=t;
     }
     else
     {
        p=head;
        for(int i=0;i<pos-1;i++)
            p=p->next;
        t=new Node;
        t->data=x;
        t->previous=p;
        t->next=p->next;
        if(p->next)
        p->next->previous=t;
        p->next=t;
     }
     return head;
}
void display(Node *head)
{
    Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
{
    Node *first=NULL;
    int n,x,pos;
    cout<<"Enter the number of elements in the list: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        first=Insert(i,x,first);
    }
    display(first);
return 0;
}