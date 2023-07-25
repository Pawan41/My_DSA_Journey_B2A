#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {3, 5, 1, 2, 7};
    int n = 5;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int count=0;
        for (int j = i; j< n &&count<3 ; j++)
        {
            sum = sum + arr[j];
            count++;
        }
        maxSum = max(maxSum, sum);
    }
    cout <<"The  maximum sum of the subarray is : "<< maxSum;
    return 0;
}