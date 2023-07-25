#include<iostream>
#include<cstring>
using namespace std;
typedef int marks;
class Student
{
    int rollno;
    string Name;
    marks physics,chem,maths;
    public:
    Student(){
        cout<<"glll\n";
    }

    Student(string N,int r,int p,int c,int m)
    {
        set_Rollno(r);
        set_Name(N);
        set_Marks(p,c,m);
    }
    void set_Rollno(int r)
    {
        rollno=r;
        cout<<"the rollno is : "<<rollno;
    }
    
    void set_Name(string N)
    {
        Name= N;
        cout<<"\nthe name is : "<<Name;
    }
   
    int set_Marks(int p,int c,int m)
    {
        physics=p;
        chem=c;
        maths=m;
        cout<<"\nMarks obtained in different subjects   Total";
        cout<<"\nMarks in physics   :"<<physics;
        cout<<"\nMarks in chemistry :"<<chem;
        cout<<"\nMarks in Maths     :"<<maths<<"\t";
        return physics+chem+maths; 
    }
   
    float get_average()
    {
        float average=(physics+chem+maths)/3;
        cout<<"the average is : "<<average;
    }
    
};
int main()
{
Student s2,s1("pawan",3,44,55,66);
 
}