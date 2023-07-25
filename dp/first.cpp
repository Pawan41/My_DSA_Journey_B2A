#include<bits/stdc++.h>
using namespace std;

//sort according to the length
bool myComp(string a,string b){
    //sort decreasing order of length
    if(a.length() > b.length()){
        return true;
    }
    return false;
}

int main(){
    vector<string> v={"pawan","govind","Neha","harshit","AB","S","yamuna","shagun"};

    sort(v.begin(),v.end(),myComp);

    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";

    return 0;
}