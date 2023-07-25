#include <bits/stdc++.h>
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

    bool isPresent(N data){
        node<N>*temp=head;
        while(temp!=NULL){
            if(temp->data==data){
                return true;
            }
            temp=temp->next;
        }
        return false;
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
    
    //delete at random 
    void deletedNodeData(N data){
        //if the data is not present in the list ya head is pointing to null than simply return
        if(!isPresent(data) || head==NULL) return;

        if(head->next==NULL){
            if(head->data==data){
                delete(head);
                head=NULL;
            }
        }else if(head->data==data){
            node<N>*temp=head;
            head=head->next;
            delete(temp);
        }else{
            node<N>* temp=head;
            while(temp->next->data!=data){
                temp=temp->next;
            }
            node<N>*delen=temp->next;
            temp->next=temp->next->next;
            delete(delen);
        }
    }

    N deleteEnd()
    {
        N deletenodeD = NULL;
        if (head == NULL)
        {
            cout << "nothing to delete.......\n";
        }
        //there is only one node present in the list
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

template<class T>
class unorderedSet{
    private:
    LinkedList<T> arr[3];
    int unique=0;
    int size=3;
    hash<T> myHash;

    public:
    int getHash(T data){
        return myHash(data);
    }

    void insert(T data){
        int index=abs(getHash(data))%size;
        //if the data at the index is present in the given array of linked list than simple return
        if(arr[index].isPresent(data)){
            return;
        }
        arr[index].insertEnd(data);
        unique++;
    }

    void remove(T data){
        int index=abs(getHash(data))%size;
        //if the data at the index is not present in the given array of linked list than simple return
        if(!arr[index].isPresent(data)){
            return;
        }
       
       arr[index].deletedNodeData(data);
       unique--;
    }

    //searching
    bool isPresent(T data){
        int index=abs(getHash(data))%size;
        if(!arr[index].isPresent(data)){
            return false;
        }
        return true;
    }

    void display(){
        for(int i=0;i<size;i++){
            arr[i].display();
        }
        cout<<"\n--------------------------\n";
    }

};

int main()
{ 
    unorderedSet<string> m;
    m.insert("pawan");
    m.display();
    m.insert("rahul");
    m.display();
    m.insert("ketan");
    m.display();
    m.insert("anshul");
    m.display();
    m.insert("kamal");
    m.display();
    m.insert("anshulkashyap");
    m.display();
    m.insert("vinay");
    m.display();

    cout<<m.isPresent("pawan")<<" "<<m.isPresent("sunil");

    return 0;
}
