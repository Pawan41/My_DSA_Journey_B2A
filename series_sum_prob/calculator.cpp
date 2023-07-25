#include <iostream>
using namespace std;

int add(int, int);
int sub(int, int);
int mul(int, int);
int divi(int, int);
int mod(int, int);
int fact(int, int);

int add(int x, int y)
{

    return x + y;
}

int sub(int x, int y)
{

    return x - y;
}

int mul(int x, int y)
{

    return x * y;
}

int divi(int x, int y)
{

    return x / y;
}

int mod(int x, int y)
{

    return x % y;
}

int fact(int x, int y)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{

    cout << " ---------- My Calculator -----------" << endl;
    cout << endl;

    while (true)
    {

        cout << "Press 1 for addition : " << endl;
        cout << "Press 2 for subtraction : " << endl;
        cout << "Press 3 for multiplication : " << endl;
        cout << "Press 4 for division : " << endl;
        cout << "Press 5 for modulo : " << endl;
        cout << "Press 6 for Factorial of a number : " << endl;
        cout << "Press 7 for exit : " << endl;
        cout << endl;

        cout << "Enter your choice: " << endl;
        int ch;
        cin >> ch;

        if (ch == 7)
        {
            cout << " exit" << endl;
            break;
        }
        else if (ch > 6 || ch < 1)
        {
            cout << "please enter valid choice " << endl;
            continue;
        }

        int a, b;
        cout << "Enter the value of first and second number is : " << endl;
        cin >> a >> b;

        switch (ch)
        {
        case 1:
        {
            cout << "addition of two number is : " << add(a, b) << endl;
            break;
        }
        case 2:
        {
            cout << "subtraction of two number is : " << sub(a, b) << endl;
            break;
        }
        case 3:
        {
            cout << "multiplication of two number is : " << mul(a, b) << endl;
            break;
        }
        case 4:
        {
            cout << "division of two number is : " << divi(a, b) << endl;
            break;
        }
        case 5:
        {
            cout << "modulo of two number is : " << mod(a, b) << endl;
            break;
        }
        case 6:
        {
            cout << "factorial of number is : " << fact(a, b) << endl;
            break;
        }
        }
    }

    return 0;
}