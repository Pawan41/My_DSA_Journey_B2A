#include <iostream>
using namespace std;

void fun1()
{
    static int n = 10;
    cout << "   Value of n is : " << n <<" ";
    n = n * 2;
}

void fun()
{
    static int m = 10;
    for (int i = 0; i < 2; i++)
    {
        fun1();
    }
    m++;
    cout << "   Value of m is : " << m << endl;
}

int main()
{

    for (int i = 0; i < 3; i++)
    {
        fun();
    }

    return 0;
}