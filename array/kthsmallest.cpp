#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {33, 5, 78, 12, 34, 88, 54, 37, 60};
    int n = 9;
    int k = 3;

    // Method - 1

    // this technique takes O(nlog(n)) time complexity
    // sort(arr, arr + n);
    // cout << "The " << k << "th smallest element is : " << arr[k - 1];

    // Method - 2
    // this technique takes O(nlog(k)) time complexity  and this is better because k<n

    priority_queue<int> q;
    // this loop is used to store the (1- kth) element of a given array in the queue
    for (int i = 0; i < k; i++)
    {
        q.push(arr[i]);
    }

    for (int i = k; i < n; i++)
    {
        q.push(arr[i]);
        q.pop();
    }

    cout << "The " << k << "th smallest element is : " << q.top();

    return 0;
}