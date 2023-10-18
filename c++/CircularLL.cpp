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
    if (pos ==0)
    {
        if(head == NULL){
        t = new Node;
        t->data = x;
        t->next = t;
        head=t;
        }
        else
        {
            Node *temp;
            temp = new Node;
            while(temp->next!=head) // for going towards the last node
                temp=temp->next;
            temp->next=t;
            t->data=x;
            t->next=head;
        }
    }
    else if(pos >0 )
    {
        p = head;
        for (int i = 0; i < pos-1 ; i++)
            p=p->next;
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
    }
    return head;
}
void display(Node *head)
{
    Node *p=head;
    do
    {
    cout<<p->data<<" ";
    p=p->next;
    }while (p!=head);
}
int main()
{
    int n,x;
    Node *first=NULL;
    cout<<"Enter the number of elements in the list: ";
    cin>>n;
    cout<<"Enter the elements of the list: ";
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        first=Insert(i,x,first);
    }
    display(first);
return 0;
}