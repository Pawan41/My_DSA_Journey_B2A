#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[] = {33, 44, 56, 22, 77, 11, 66, 86};
    int n = 8;

    int max_element = INT_MIN;
    int min_element = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // -------------------------------------------
        // code for calculation of the maximun number
        // -------------------------------------------
       
        // if (arr[i] > max_element)
        // {
        //     max_element = arr[i];
        // }

        // or
        max_element = max(max_element, arr[i]);
        min_element = min(min_element, arr[i]);
    }
    cout << max_element << endl;
    cout << min_element << endl;
    return 0;
}