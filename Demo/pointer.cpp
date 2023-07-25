#include <iostream>
using namespace std;

int main()
{
    char a = 'c';
    void *s = &a;
    
    cout << (int *)&a << " " << &s;
}