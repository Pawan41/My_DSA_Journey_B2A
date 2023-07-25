#include <iostream>
using namespace std;

int main()
{
    // Character Array
    char ch[10];
    cout << "Enter the character: " << endl;
    cin >> ch;
    ch[2] = '\0';

    // string
    string st;
    cout << "Enter the string: " << endl;
    cin >> st;
    st[2] = '\0';

    cout << "Our String is : " << st << endl;
    cout << "Our character array is : " << ch;

    return 0;
}