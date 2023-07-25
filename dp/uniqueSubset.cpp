#include <bits/stdc++.h>
using namespace std;

void go(vector<int> arr, int i, int x, vector<int> &cur_set,set<vector<int>> &uniquesubset)
{
    // base case
    // if remaining element are less than x than simly return
    if (x > arr.size() - i)
        return;

    if (i == arr.size())
    {
        vector<int>temp=cur_set;
        sort(temp.begin(),temp.end());
        uniquesubset.insert(temp);
        return;
    }

    // take the current element on ith position
    cur_set.push_back(arr[i]);
    go(arr, i + 1, x - 1, cur_set,uniquesubset);
    cur_set.pop_back();

    // not taking the element
    go(arr, i + 1, x, cur_set,uniquesubset);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4,5};
    cout << "enter x: " << endl;
    int x;
    cin >> x;
    vector<int> cur_set;
    set<vector<int>> uniquesubset;
    go(arr, 0, x, cur_set,uniquesubset);

    for(vector<int>v:uniquesubset){
        for(int elm:v){
            cout<<elm <<", ";
        }
        cout<<endl;
    }

    return 0;
}