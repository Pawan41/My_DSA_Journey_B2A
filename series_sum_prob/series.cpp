/*
  code for series like

  1^2*2^2 /(2^2 +3^2+4^2) *  2^2*3^2 /(3^2 +4^2+5^2) * 3^2*4^2 /(4^2 +5^2+6^2) * ....

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    float product=1.0f;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
   
    for (int i = 1; i <= n; i++)
    {
        product=product*((i*i)*(i +1.0)*(i+1.0)*(i +1.0))/((i +1.0)*(i+1.0)+(i +2.0)*(i+2.0)+(i +3.0)*(i + 3.0));
        cout<<"For n= "<< i <<" ,   ans= "<< product<<endl;
    }
}