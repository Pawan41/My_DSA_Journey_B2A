#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={0,2,6,5,3,3,2,1,2,1};
    int n=10;
    sort(arr,arr+n);
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }   
    cout<<endl;

   /*-----------------lowerbound of 1 is 1 but its upper bound is 2---------------t
   this is possible when element is present -------------------------*/

    // int *ptr = lower_bound(arr,arr+n,1);
    // int *ptr = upper_bound(arr,arr+n,1);

   /*-----------------lowerbound of 4 is 5 as well as  its upper bound is 5 ---------------t
   this is possible when element is not present -------------------------*/

    int *ptr = upper_bound(arr,arr+n,4);
    
    if(ptr==(arr+n)){
        cout<<"Not Found!!!!!!!!!";
    }
    cout<<(*ptr)<<endl;
    
    
}