/* Define a class student and write a program to enter student details using constructor
    and define member function to display all the details.      */

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    private:
        int rno;
        char name[20];

    public:
    Student(int r,char n[])
    {
        rno=r;
        strcpy(name,n);
    }

    void display_data()
    {
        cout<<"------------------------"<<endl;
        cout<<"Roll no -> "<<rno<<endl;
        cout<<"Name -> "<<name<<endl;
    }
};

int main()
{
    Student s1(5,"Yashvi");
    Student s2(10,"Khushi");

    s1.display_data();
    s2.display_data();

    return 0;
}
