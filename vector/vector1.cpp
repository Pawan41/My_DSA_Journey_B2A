#include <iostream>
using namespace std;

template <typename T>

class vector
{

private:
    // make a pointer arr of T type
    T *arr;
    int counter;
    int curr_size;

public:
    vector()
    {
        // initially the size of the array is :--2
        arr = new T[2];
        // initially the value of the counter is 2 .
        counter = 0;
        // initially the value of the curr_size is 2.
        curr_size = 2;
    }

    void push_back(T data)
    {

        // writing a code for creating a double size of array and copy the value of previous array in new array
        if (curr_size == counter)
        {

            T *temp = new T[2 * curr_size];

            //  copy the previous value of the array in new array
            for (int i = 0; i < curr_size; i++)
            {
                temp[i] = arr[i];
            }
            T *temp1 = arr;
            arr = temp;
            delete (temp1);
            curr_size *= 2;
        }

        arr[counter] = data;
        counter++;
    }

    T pop_back()
    {
        if (counter == 0)
        {
            cout << " Nothing to delete the vector is empty....";
            return NULL;
        }
        if (2 * curr_size == counter)
        {

            T *temp = new T[curr_size / 2];

            //  copy the previous value of the array in new array
            for (int i = 0; i < curr_size / 2; i++)
            {
                temp[i] = arr[i];
            }
            T *temp1 = arr;
            arr = temp;
            delete (temp1);
            curr_size /= 2;
        }
        counter--;
        return arr[counter];
    }

    T get(int index)
    {
        if (index >= counter)
        {
            return NULL;
        }
        return arr[index];
    }

    int size()
    {
        return counter;
    }

    void display()
    {
        for (int i = 0; i < size(); i++)
        {
            cout << arr[i] << " , ";
        }
        cout << endl;
    }
};

int main()
{

    vector<string> arr;
    arr.push_back("pawan");
    arr.push_back("anshul");
    arr.push_back("sunil");
    arr.push_back("ketan");
    arr.push_back("janu");
    arr.display();

    cout << "Deleted item is " << arr.pop_back() << endl;
    cout << "Deleted item is " << arr.pop_back() << endl;
    cout << "Deleted item is " << arr.pop_back() << endl;
    cout << "Deleted item is " << arr.pop_back() << endl;

}