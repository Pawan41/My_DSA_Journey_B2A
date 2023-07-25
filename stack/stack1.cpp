#include <iostream>
using namespace std;

template <class T>
class stack
{

private:
    int length;
    T *arr;
    int top;

public:
    stack()
    {
        top = -1;
        length = 0;
        arr = new T[100];
    }
    void push(T element)
    {
        if (top == 100)
        {
            cout << "stack is full!!!!!.......";
            return;
        }
        top++;
        arr[top] = element;
        length++;
    }

    T pop()
    {
        if (top == -1)
        {
            cout << "stack is Empty......\n";
            return NULL;
        }
        length--;
        return arr[top--];
    }

    T getTop()
    {
        if (top == -1)
        {
            cout << "stack is Empty......\n";
            return NULL;
        }
        return arr[top];
    }

    int size()
    {
        return length;
    }
    bool isEmpty(){
        if(top==-1){
            cout<<"stack is empty ......."<<endl;
        }else{
            cout<<"stack is not empty....."<<endl;
        }
    }
};

int main()
{
    stack<string> st;
    st.push("Nikhil");
    st.push("Sunil");
    st.push("harshit");
    st.push("pawan");
    cout << st.getTop() << " " << st.size() <<" \n ";
    st.pop();
    st.pop();
    cout << st.getTop() << " " << st.size() <<" \n ";
    st.push("ketan");
    cout << st.getTop() << " " << st.size() <<" \n ";
    st.pop();
    cout << st.getTop() << " " << st.size() <<  " \n ";
    return 0;
}
