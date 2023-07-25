#include <iostream>

using namespace std;


int main()
{
    int n;
    float sum=0.0f;
    float num_pro=1.0f;
    float den_sum=0.0f;
    int fact =1;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
        num_pro=num_pro*fact;
        den_sum=den_sum+(i+1);
        sum=sum+(num_pro/den_sum);
        cout<<"For n= "<< i <<" ,   ans= "<< sum<<endl;
    }
}