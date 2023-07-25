#include <iostream>
using namespace std;

// Function To Reverse The String
void reverse(char ch[], int n)
{
    int s = 0, e = n - 1;
    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
}

// Function To Calculate The Length of the String
int length(char ch[])
{

    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[10];
    cin >> ch;

    cout << "the name of the string is :" << ch << endl;
    int len = length(ch);
    cout << "The length of the string is: " << len;
    reverse(ch, len);
    cout << "The reverse string is:" << ch;
    return 0;
}
