#include <iostream>

using namespace std;

int main()
{
    int n;
    float sum=0.0f;
    int num_prod=1;
    float den_sum=0.0f;
    int fact =1;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
        num_prod=num_prod*i;
        den_sum=den_sum+fact;
        sum=sum+(num_prod/den_sum);
        cout<<"For n= "<< i <<" ,   ans= "<< sum<<endl;
    }
}