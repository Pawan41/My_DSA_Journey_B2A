#include <iostream>
using namespace std;
int sum(int arr[], int i ){
    if(i==0){
        return arr[0];
    }
    return sum(arr,i-1)+arr[i];
}
int main(){
    int arr[]={1,2,4,5,6,7,8};
    int n=7;
    cout<<sum(arr,n-1);
    return 0;
}