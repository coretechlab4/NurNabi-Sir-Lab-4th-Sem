#include<iostream>
using namespace std;

static int scount=0;

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
        Student s[100];
        while(1)
        {

                cout<<"1. Add Student"<<endl;
                cout<<"2. Show StudentInfo"<<endl;
                cout<<"3. Press 0 to Exit"<<endl;
                int press;
                cin>>press;
            if(press==1)
            {
                scount++;
                s[scount].getinfo;
            }
            else if(press==2)
            {
                int sid;
                cin>>sid;
            }
            else if(press==0)
            {
                break;
            }

        }
}
