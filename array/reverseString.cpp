#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str)
{
    int s = 0, e = str.length() - 1;
    while (s <= e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }

    return str;
}

int main()
{

    int t;
    cout << "Enter the length of the string : " << endl;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}
