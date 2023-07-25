#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size]={1} ;
    
    int q;
    cin >> q;
    int pos, element;
    while (q--)
    {
        cout << "Enter the position and element : " << endl;
        cin >> pos >> element;

        if (pos < size && pos >= 0)
        {
            for (int i = size; i >= pos; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[pos] = element;
            // size++;
        }
        else
        {
            cout << "invalid index....";
        }
    }

    for (int i = 0; i < size; i++)
    {  
        cout << arr[i] << " " << endl;
    }
    return 0;
}