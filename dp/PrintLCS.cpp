#include<bits/stdc++.h>
using namespace std;

void findLongestCommonSubsequence(string &s,string &t){
    int n=s.length();
    int m=t.length();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    // Base Case
    for(int i=0;i<=n;i++) dp[i][0]=0;
    for(int j=0;j<=m;j++) dp[0][j]=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int len = dp[n][m];
    int index=len-1;
    string st="";
    for(int i=0;i<len;i++){
        st+="$";
    }
    int i=n,j=m;
    while(i>0 && j>0){
        if(s[i-1]==t[j-1]){
            st[index] =s[i-1];
            index--;
            i--;
            j--;
        }else if(dp[i-1][j]>dp[i][j-1]){
            i=i-1;
        }else{
            j=j-1;
        }
    }
    cout<<st;
}

int main(){
    string s="abcde";
    string t="bdgek";
    findLongestCommonSubsequence(s,t);
}