#include <iostream>
using namespace std;

string convert(string string)
{
    int len = string.length();
    cout << "Length of the string is : " << len << endl;

    for (int i = 0; i < len; i++)
    {
        char cur = string[i];

        if (cur >= 'a' && cur <= 'z')
        {   
            //if the cur is lower case than convert it into uppercase
            cur = cur - 'a' + 'A';
        }
        else if (cur >= 'A' && cur <= 'Z')
        {
            //if the cur is lower case than convert it into lower case
            cur = cur - 'A' + 'a';
        }
        string[i] = cur;
    }
    return string;
}

int main()
{

    string s;
    cout<<"Enter the string which contain lower and upper case character: "<<endl;
    cin >> s;

    cout << convert(s) << "\n";
}