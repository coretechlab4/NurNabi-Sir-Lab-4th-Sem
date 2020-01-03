#include<iostream>
using namespace std;

class Student
{
public:
    int id;
    char name[50];
    char sec[10];
    char sem[10];
    char dept[30];

    void setinfo()
    {
        cout<<"Enter Id          : ";
        cin>>id;
        cout<<"Enter Name        : ";
        cin>>name;
        cout<<"Enter Semester    : ";
        cin>>sem;
        cout<<"Enter Section     : ";
        cin>>sec;
        cout<<"Enter Department  : ";
        cin>>dept;
    }
    void getinfo()
    {
        cout<<"Id            : "<<id<<endl;
        cout<<"Name          : "<<name<<endl;
        cout<<"Semester      : "<<sem<<endl;
        cout<<"Section       : "<<sec<<endl;
        cout<<"Department    : "<<dept<<endl;
    }
};
int main()
{
        Student s;
        s.setinfo();
        s.getinfo();
}
