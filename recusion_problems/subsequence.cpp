#include<bits/stdc++.h>
using namespace std;
void printSubsequence(int ind,int n,vector<int>&v,int arr[]){
    //base case 
    if(ind==n){
        //print the subsequence
        for(auto it:v){
            cout<<it<<" ";
        }
        if(v.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    //take 
    v.push_back(arr[ind]);
    printSubsequence(ind+1,n,v,arr);
    v.pop_back();

    //not take
    printSubsequence(ind+1,n,v,arr);
}

int main(){
    int arr[]={2,1,3};
    int n=3;
    vector<int>v;

    printSubsequence(0,n,v,arr);
}
