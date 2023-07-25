#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
    while (end < start)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    int k = 2;
    printArray(arr, n);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);

    printArray(arr, n);
    return 0;
}