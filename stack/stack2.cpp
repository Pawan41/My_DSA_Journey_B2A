#include <iostream>
using namespace std;

template <class T>
class node
{
    public:
    T data;
    node * next;
    node(T data)
    {
        this->data = data;
    }
};
template<class T>
class stack
{

private:
    int length;
    node<T> *top;

public:
    stack()
    {
        length = 0;
        top = NULL;
    }
    void push(T data)
    {
        node<T> *ptr = new node<T>(data);
        if (top == NULL)
        {
            top = ptr;
        }
        else
        {
            ptr->next = top;
            top = ptr;
        }
        length++;
    }

    T pop()
    {
        if (top == NULL)
        {
            cout << "stack is Empty......\n";
            return NULL;
        }
        node<T> *deleted = top;
        top = top->next;
        T DeletedData = deleted->data;
        delete (deleted);
        length--;
        return DeletedData;
    }

    T getTop()
    {
        if (top == NULL)
        {
            cout << "stack is Empty......\n";
            return NULL;
        }
        return top->data;
    }

    int size()
    {
        return length;
    }
};

int main()
{
    stack<string> st;
    st.push("Nikhil");
    st.push("Sunil");
    st.push("harshit");
    st.push("pawan");
    cout << st.getTop() << " " << st.size() << " \n ";
    st.pop();
    st.pop();
    cout << st.getTop() << " " << st.size() << " \n ";
    st.push("ketan");
    cout << st.getTop() << " " << st.size() << " \n ";
    return 0;
}