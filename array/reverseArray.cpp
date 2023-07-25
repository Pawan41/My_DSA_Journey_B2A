#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0, end = n - 1;
    while (start < end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // start++;
        // end--;
        

        // or
        
        swap(arr[start++],arr[end--]);
    }
}
int main()
{

    int arr[] = {33, 5, 22, 77, 65, 32, 78, 11};
    int n = 8;

    reverse(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}