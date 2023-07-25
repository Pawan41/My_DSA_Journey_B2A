#include <iostream>
using namespace std;

// implement a node generically
template <class N>
class node
{
public:
    // data member
    N data;
    node<N> *next;

    // member function
    node(N data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// implement linked list generically
template <class N>
class LinkedList
{
    // data member
private:
    node<N> *head;
    int length;

    // member function
public:
    // default constructor
    LinkedList()
    {
        head = NULL;
        length = 0;
    }

    void insertHead(N data)
    {
        node<N> *temp = new node<N>(data);

        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
        length++;
    }

    void insertEnd(N data)
    {
        node<N> *ptr = new node<N>(data);

        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            node<N> *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            // now i am reach at the last node
            temp->next = ptr;
        }
        length++;
    }

    N deleteHead()
    {
        N deletenodeD = NULL;
        if (head == NULL)
        {
            cout << "nothing to delete.......\n";
        }
        else if (head->next == NULL)
        {
            deletenodeD = head->data;
            delete (head);
            head = NULL;
        }
        else
        {
            deletenodeD = head->data;
            head = head->next;
            delete (head);
        }
        length--;
        return deletenodeD;
    }

    N deleteEnd()
    {
        N deletenodeD = NULL;
        if (head == NULL)
        {
            cout << "nothing to delete.......\n";
        }
        else if (head->next == NULL)
        {
            deletenodeD = head->data;
            delete (head);
            head = NULL;
        }
        else
        {
            node<N> *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            deletenodeD = temp->next->data;
            delete (temp->next);
            temp->next = NULL;
        }
        length--;
        return deletenodeD;
    }

    int size()
    {
        return length;
    }

    void display()
    {
        node<N> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ---> ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main()
{
    LinkedList<int> l1;
    l1.insertHead(23);
    l1.insertHead(34);
    l1.insertHead(44);

    l1.insertEnd(66);
    l1.insertEnd(67);

    l1.deleteHead();
    l1.deleteEnd();
    l1.display();

    cout << "No of element in our linked list is: " << l1.size();

    return 0;
}
