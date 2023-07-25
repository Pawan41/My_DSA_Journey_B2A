#include <bits/stdc++.h>
using namespace std;

void go(vector<int> arr, int i, int x, vector<int> &cur_set)
{
    // base case

    // if remaining element are less than x than simply return
    if (x > arr.size() - i)
        return;

    if (i == arr.size())
    {
        for (int element : cur_set)
            cout << element << " ";
        cout << "\n";
        return;
    }

    // take the current element on ith position
    cur_set.push_back(arr[i]);
    go(arr, i + 1, x - 1, cur_set);
    cur_set.pop_back();

    // not taking the element
    go(arr, i + 1, x, cur_set);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4,5};
    cout << "enter x: " << endl;
    int x;
    cin >> x;
    vector<int> cur_set;
    go(arr, 0, x, cur_set);

    return 0;
}