#include <iostream>
using namespace std;

void printopposite(int i)
{
    if (i == 0)
    {
        return;
    }
    // cout<<i<<" ";      // used if we want a print number like this--> n n-1 n-2......3 2 1
    printopposite(i - 1);
    cout << i << " "; // used if we want a print number like this--> 1 2 3 4 .... n-3 n-2 n-1 n
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    printopposite(n);
}
