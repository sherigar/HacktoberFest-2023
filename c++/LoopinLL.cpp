#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *Insert(int pos,int x,Node *head)
{
    Node *t,*p;
    if(pos==0)
    {
        t=new Node;
        t->data=x;
        t->next=head;
        head=t;
    }
    else if(pos >0)
    {
        p=head;
        for(int i=0;i<pos-1 &&p;i++)
        p=p->next;
        if(p)
        {
            t=new Node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
    return head;
}
void Display(Node *head)
{
    Node *p=head;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
bool Loop(Node *head)
{
    bool var;
    Node *p,*q;
    p=head;
    q=head;
    // while(p && q && p!=q)
    // {
    //     p=p->next;
    //     q=q->next;
    //     if(q!=NULL)
    //     q->next;
    //     else
    //     q=q;
    // }    
    // if(p==q)
    // var =true;
    // else
    // var = false;
    do
    {
    p=p->next;
    q=q->next;
    q=q?q->next:q;
    }
    while(p && q && p!=q);
    if(p==q)
    var=true;
    else
    var=false;
    return var;
}
int main()
{
Node *first=NULL;
int x;
int n;
cout<<" Enter the Number of elements you want to enter "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x;
    first=Insert(i,x,first);
}
// Display(first);
// cout<<endl;
Node *t1,*t2;
// t1=first->next->next;
// t2=first->next->next->next->next;
// t2->next=t1;
if(Loop(first))
cout<<" linked List has a Loop "<<endl;
else
cout<<" linked list does not have a Loop "<<endl;
return 0;
}