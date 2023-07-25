#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the value of n : " << endl;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j % 2;
        }
        cout << endl;
    }

    return 0;
}

/* 
print a patteren like this 
1
01
101
0101
...
...
*/