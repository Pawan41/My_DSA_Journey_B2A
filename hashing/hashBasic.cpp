#include<bits/stdc++.h>
using namespace std;

class Student{
   public:
    int rollno;
    string name;
    int marks;

    Student(int rollno,string name,int marks){
        this->marks=marks;
        this->name=name;
        this->rollno=rollno;
    }

    // make a hash function for class student
    int getHash(){
        hash<int> hf1;
        hash<string> hf2;

        return (hf1(rollno)+hf2(name)+hf1(marks))%100;
    }

};

int main(){

    Student st(33,"pawan",200);
    Student st1(34,"sunil",300);
     
    //it gives an error because here we are making a own hash student and it does not exist in hash table 
    // hash<student> st;

    cout<<st.getHash()<<" "<<st1.getHash();

}