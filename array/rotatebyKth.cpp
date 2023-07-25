#include <iostream>
using namespace std;

// rotate an array by one position
void rotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

// printing the elements
void printFinalArray(int arr[], int n)
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
    int k = 3;

    // rotate the array element by k times
    for (int i = 0; i < k; i++) // work on k*n times
    {
        rotateByOne(arr, n);
    }

    printFinalArray(arr, n);

    return 0;
}