#include <bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int l, int h, int target)
{
    // base case
    if (l > h)
    {
        // l>h it means there is no element in a search space
        return -1;
    }

    int mid = (l + h) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] > target)
    {
        return Binary_Search(arr, l, mid - 1, target);
    }
    else
    {
        return Binary_Search(arr, mid + 1, h, target);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 3, 8, 10, 16, 13, 20};
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
    int ans = Binary_Search(arr, 0, n - 1, target);

    if (ans != -1)
    {
        cout << "Our Target element present at index:  " << ans;
    }
    else
    {
        cout << "Our target element not present in array!!!!!!!!!!!!";
    }

    return 0;
}
