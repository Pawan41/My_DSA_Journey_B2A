#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum=0.0f;
    float fact1=1.0f;
    float num_sum=0.0f;
    float den_sum=0.0f;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        num_sum=num_sum+i;
        fact1=fact1*i;
        den_sum=den_sum+fact1;
        sum=sum+(num_sum/den_sum);
        cout<<"For n= "<< i <<" ,   ans= "<< sum<<endl;
    }
}