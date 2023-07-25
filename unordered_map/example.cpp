#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>database;

    cout<<"Enter the number of query: "<<endl;
    int q;
    cin>>q;

    while(q--){
        //in the question there are two type is given that are 1,2
        int type;
        cin>>type;
        
        //type 1 tells the insert the given name key into the map with its marks 
        //and also if name key exist than simply update its marks
        if(type==1){
           string name;
           int marks;

           cin>>name>>marks;
           database[name]=marks;
        }else{
            string name;
            cin>>name;

            cout<<"marks of "<<name <<" is: "<<database[name]<<endl;
        }
    }
}