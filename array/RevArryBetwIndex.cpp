#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int s, int e)
{

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}
int main()
{

    int arr[] = {33, 44, 56, 22, 77, 11, 66, 86};
    int n = 8;

    reverse(arr, 2, 5);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}