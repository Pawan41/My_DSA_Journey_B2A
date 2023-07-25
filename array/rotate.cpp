#include <iostream>
using namespace std;

// rotate an array by one position
void rotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
        // arr[i] =arr[i+1];
    }
    arr[n - 1] = temp;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    rotateByOne(arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}