/*
code for the series like ..

1^2 /(1!+2!) + 2^2 /(2!+3!) + 3^2 /(3!+4!) +......

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum=0.0f;
    int fact1=1;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        fact1=fact1*i;
        sum=sum+(i*i)/(float)(fact1+fact1*(i+1));
        cout<<"For n= "<< i <<" ,   ans= "<< sum<<endl;
    }
}