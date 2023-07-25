#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j >1; j--)
        {

            cout << j % 2;
        }
        cout << endl;
    }
}

/* 
print a patteren like this 
0
10
010
1010
...
...
*/