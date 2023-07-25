#include <iostream>
using namespace std;

class Student
{
private:
    int marks;
    int phone;

public:
    int rollno;
    string name;

    void setPhone(int Sphone)
    {
        phone = Sphone;
    }

    int getPhone()
    {
        return phone;
    }

    void setMarks(int Smark, int password)
    {
        if (password == 1234)
        {
            marks = Smark;
        }
        else
        {
            marks = 99;
        }
    }

    int getMarks()
    {
        return marks;
    }
};

int main()
{
    Student s1;
    s1.setMarks(60, 98);
    s1.setPhone(7777);

    cout << s1.getMarks() << " " << s1.getPhone() << "\n";

    return 0;
}
