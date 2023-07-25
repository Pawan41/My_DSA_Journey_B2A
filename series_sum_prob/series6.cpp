#include <iostream>

using namespace std;

int
main ()
{
  int n;
  float sum = 0.0f;
  float num_sum = 0.0f;
  int fact = 1;
  cout << "Enter the value of n " << endl;
  cin >> n;
  for (int i = 1; i <= n; i++)
    {
      fact = fact * i;
      num_sum = num_sum + fact;
      sum = sum + (float)(num_sum / ((i + 1) * (i + 2)));
      cout << "For n= " << i << " ,   ans= " << sum << endl;
    }
}