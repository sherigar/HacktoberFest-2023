#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
}
*first;
void Create(int A[],int n)
{
    Node *t,*last;
    int i;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
Node* Search(Node *head,int key)
{
    Node *p=head;
    while(p!=NULL)
    {
        if(p->data==key)
        {
            cout<<"\nElement found";
            return p;
        }
        p=p->next;
    }
}
Node* RecSearch(Node *head,int key)
{
    Node *p=head;
    if(p==NULL)
    return NULL;
    if(p->data==key)
    return p;
    else
    return RecSearch(p->next,key);
}
int main()
{
    int n,i,a[100];
    cout<<"Enter the size of the array : ";
    cin>>n;
    cout<<"Enter the elements of the array : ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Create(a,n);
    int key;
    cout<<"\nEnter the element to be searched : ";
    cin>>key;
    Node *p=RecSearch(first,key);
    if(p==NULL)
    cout<<"\nElement not found";
    else
    cout<<"\nElement found  ";
return 0;
}