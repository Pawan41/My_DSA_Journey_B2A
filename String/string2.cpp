#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    cin >> st;  // abc 
   map<char, int> mp;

    for (int i = 0; i < st.size(); i++)
    {
        if (i % 2 == 0)
        {
            mp[st[i]]++;
        }
        else
        {
            mp[st[i]]--;
        }
    }
    char non_rep = '1';
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second == 1)
        {
            non_rep = it->first;
            break;
        }
    }
    cout << (char)non_rep << "\n";

    return 0;
}