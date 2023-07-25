#include <bits/stdc++.h>
using namespace std;

int lower_bound(int arr[], int target, int size)
{
    int l = 0;
    int h = size - 1;
    int ans = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            h = mid - 1;
        }
        else if (arr[mid] > target)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {1, 2, 0, 0, 1, 1, 2, 2, 3};
    int n = 9;
    int target;
    sort(arr, arr + n);
    cout << "Our sorted array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter the target: " << endl;
    cin >> target;
    cout << "the first occurence of element: " << target << " is : " << lower_bound(arr, target, n);

    return 0;
}