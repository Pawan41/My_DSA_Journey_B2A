#include <iostream>
using namespace std;

int main()
{

    int n, marks[n];
    cout << "Enter the value of number of elements: " << endl;
    cin >> n;
    int prod = 1;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++)
    {
        prod = prod * marks[i];
        sum = sum + marks[i];
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res + ((prod / marks[i]) * (sum - marks[i]));
    }

    cout << "answer " << (res / (prod * 1.0));
}