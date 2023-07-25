#include <bits/stdc++.h>
using namespace std;

void mystack()
{
    string str = "Pawan";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans = " ";

    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "reverse string is : " << ans;
}
int main()
{

    mystack();
    return 0;
}
