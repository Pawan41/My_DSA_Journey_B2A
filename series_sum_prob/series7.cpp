#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum=0.0f;
    float num_sum=0.0f;
    float den_sum=0.0f;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        num_sum=num_sum+(2*i-1);
        den_sum=den_sum+((2*i-1)*(2*i-1));
        sum=sum+(num_sum/den_sum);
        cout<<"For n= "<< i <<" ,   ans= "<< sum<<endl;
    }
}