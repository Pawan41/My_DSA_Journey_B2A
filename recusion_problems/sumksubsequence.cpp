#include<bits/stdc++.h>
using namespace std;
void printSubsequence(int ind,int n,vector<int>&v,int arr[],int sum,int s){
    //base case 
    if(ind==n){
        if(s<=sum){
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    //take 
    v.push_back(arr[ind]);
    s+=arr[ind];
    printSubsequence(ind+1,n,v,arr,sum,s);
    v.pop_back();
    s-=arr[ind];

    //not take
    printSubsequence(ind+1,n,v,arr,sum,s);
}

int main(){
    int arr[]={2,1,3};
    int n=3;
    int sum=3;
    vector<int>v;
    int s=0;

    printSubsequence(0,n,v,arr,sum,0);
}
