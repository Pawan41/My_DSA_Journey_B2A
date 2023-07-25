#include <iostream>
using namespace std;

int min_value(int arr[], int i)
{
    if (i == 0)
    {
        return arr[0];
    }
    // to find the minimum value using recursion

    int min_term = min_value(arr, i - 1);
    if (min_term < arr[i])
    {
        return min_term;
    }
    else
    {
        return arr[i];
    }

    // to find the maximum value using recursion

    // int max_term = min_value(arr, i - 1);
    // if (max_term > arr[i])
    // {
    //     return max_term;
    // }
    // else
    // {
    //     return arr[i];
    // }
}

int main()
{
    int arr[] = {13, 33, 44, 22, 31, 22};
    int n = 6;
    cout << min_value(arr, n - 1);
    return 0;
}