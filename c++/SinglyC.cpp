#include <iostream>
using namespace std;

template<class T>
struct node
{
    T iNo;
    struct node *next;
};

// typedef struct node NODE;
// typedef struct node *PNODE;

template<class T>
class SinglyC
{
    private:
        int iSize;
        node <T> *Head;
        node <T> *Tail;

    public: 
        SinglyC();
        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(int, T);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
        void Display();
        int Count();
};

template<class T>
SinglyC <T> ::SinglyC()
{
    Head = NULL;
    Tail = NULL;
    iSize = 0;
}

template<class T>
void SinglyC <T> ::InsertFirst(T iNo)
{
    node  <T> *newn = new node <T>;
    newn->iNo = iNo;
    newn->next = NULL;

    if (Head == NULL && Tail == NULL)
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        newn->next = Head;
        Head = newn;
    }
    Tail->next = Head;
    iSize++;
}

template<class T>
void SinglyC <T> ::InsertLast(T iNo)
{
    node <T> *newn = new node <T>;
    newn->iNo = iNo;
    newn->next = NULL;

    if (Head == NULL && Tail == NULL)
    {
        Head = newn;
        Tail = newn;
    }
    else
    {
        Tail->next = newn;
        Tail = newn;
    }
    Tail->next = Head;
    iSize++;
}

template<class T>
void SinglyC <T> ::InsertAtPos(int iPos, T iNo)
{
    if (iPos > (iSize + 1) || iPos < 1)
    {
        cout << "Unable to insert an element ! Please Give Valid Position !" << endl;
        return;
    }
    else if (iPos == (iSize + 1))
    {
        InsertLast(iNo);
    }
    else if (iPos == 1)
    {
        InsertFirst(iNo);
    }
    else
    {
        node <T> *temp = Head;
        node <T> *newn = new node <T>;
        newn->iNo = iNo;
        newn->next = NULL;

        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iSize++;
    }
    Tail->next = Head;
}

template<class T>
void SinglyC <T> ::DeleteFirst()
{
    if (Head == NULL && Tail == NULL)
    {
        cout << "No Elements found to delete from the linked list !" << endl;
        return;
    }
    else if (Head == Tail)
    {
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        node <T> *temp = Head;
        Head = Head->next;
        delete (temp);
    }
    Tail->next = Head;
    iSize--;
}

template<class T>
void SinglyC <T> ::DeleteLast()
{
    if (Head == NULL && Tail == NULL)
    {
        cout << "No Elments Ware found to delete from the linked list !" << endl;
        return;
    }
    else if (Head == Tail)
    {
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        node <T> *temp = Head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }

        Tail = temp;
        delete (temp->next);
    }
    Tail->next = Head;
    iSize--;
}

template<class T>
void SinglyC <T> ::DeleteAtPos(int iPos)
{
    if (iPos > iSize || iPos < 1)
    {
        cout << "Unable to delete an element ! Please Give Valid Position !" << endl;
        return;
    }
    else if (iPos == iSize)
    {
        DeleteLast();
    }
    else if (iPos == 1)
    {
        DeleteFirst();
    }
    else
    {
        node <T> *temp = Head;
        for (int i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        node <T> *temp1 = temp->next->next;
        delete (temp->next);
        temp->next = temp1;
    }
    Tail->next = Head;
    iSize--;
}

template<class T>
void SinglyC <T> ::Display()
{
    node <T> *temp = Head;

    if (temp == NULL && Tail == NULL)
    {
        cout << "NULL" << endl;
        return;
    }
    else
    {
        do
        {
            cout << "|" << temp->iNo << "|->";
            temp = temp->next;
        } while (temp != Tail->next);
        cout << "NULL" << endl;
    }
}

template<class T>
int SinglyC <T> :: Count()
{
    return iSize;
}


int main()
{
    SinglyC<int> lobj;

    lobj.InsertFirst(1);
    lobj.InsertFirst(2);
    lobj.InsertFirst(3);
    lobj.InsertFirst(4);
    lobj.InsertFirst(5);
    lobj.Display();

    lobj.InsertLast(0);
    lobj.InsertLast(-1);
    lobj.InsertLast(-2);
    lobj.Display();

    cout << "The total number of elements present in the linked list: -" << lobj.Count() << endl;

    lobj.InsertAtPos(10, 2);
    lobj.Display();

    lobj.DeleteFirst();
    lobj.Display();

    lobj.DeleteLast();
    lobj.Display();

    lobj.DeleteAtPos(6);
    lobj.Display();

    return 0;
}