#include<bits/stdc++.h>
using namespace std;

template<class K,class V>

class UnorderedMap{

    //data member
    private:
    int unique;
    vector<pair<K,V>>*arr;
    int size;
    hash<K> myHash;

    public:
    //constructure
    UnorderedMap(){
        unique =0;
        size=2;
        arr=new vector<pair<K,V>>[size];
    }
    
    int getHash(K key){
        return myHash(key);
    }

    bool find(K key){
        int index=(getHash(key))%size;

        for(pair<K,V>p:arr[index]){
            if(p.first==key) {
                return true;
            }
        }
        return false;
    }

    void reHash(){
        vector<pair<K,V>>*temp=new vector<pair<K,V>>[2*size];

        swap(arr,temp);
        size=2*size;
        unique=0;

        for(int i=0;i<size/2;i++){
            for(pair<K,V>p:temp[i]){
                insert(p.first,p.second);
            }
        }
    }

    void insert(K key,V value){
        int index=(getHash(key))%size;
        // if value exist than simply update the value
        if(find(key)){
            for(pair<K,V>&p:arr[index]){
                if(p.first==key){
                    p.second=value;
                }
            }
        }else{
            arr[index].push_back({key,value});
            unique++;
        }

        if(unique*1.0/size>=2){
            reHash();
        }
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<"index : "<<i<<" ";
            for(pair<K,V> p:arr[i]){
                cout<<p.first<<" : "<<p.second<<"----> ";
            }
            cout<<endl;
        }
        cout<<"\n";
    }
};

int main(){
    UnorderedMap<string,int> record;
    record.insert("pawan",42);
    record.display();
    record.insert("sunil",33);
    record.display();
    record.insert("rahul",42);
    record.display();
    record.insert("anshul",21);
    record.display();
    record.insert("pawan",90);
    record.display();
    record.insert("deeksha",36);
    record.display();

}