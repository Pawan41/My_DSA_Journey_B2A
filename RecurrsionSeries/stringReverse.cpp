#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str, int i, int j)
{
    cout << "Recusive call for " << str << endl;

    // base case
    if (i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    // recursive call
    reverseString(str, i, j);
}

int main()
{

    string str = "pawankumar";
    cout << endl;
    reverseString(str, 0, str.length() - 1);
    cout << endl;
    cout << "Our reverse String is : " << str;
}