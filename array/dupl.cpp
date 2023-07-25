#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,6,2,6,7,8,2};
    int n=7;
    vector<int>ans;
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto c:freq){
        if(c.second>1){
            ans.push_back(c.first);
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;

}