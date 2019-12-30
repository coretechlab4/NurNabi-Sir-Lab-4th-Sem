#include <iostream>

using namespace std;

struct student
{
    int id;
    char name[50];
    char batch[30];
    char sec[10];
    char sem[10];
    char dep[30];
};

int main()
{
    int i;
    struct student s[3];
    for (i=0;i<3;i++)
    {
        cout<<"         Enter Your Details        \n";
        cout<<"....................................\n";
        cout<<"\n";
        cout<<"Enter Your Id                    : ";
        cin>>s[i].id;
        cout<<"Enter Your Name                  : ";
        cin>>s[i].name;
        cout<<"Enter Your Batch                 : ";
        cin>>s[i].batch;
        cout<<"Enter Your Section               : ";
        cin>>s[i].sec;
        cout<<"Enter Your Semester              : ";
        cin>>s[i].sem;
        cout<<"Enter Your Department            : ";
        cin>>s[i].dep;
        cout<<"\n";
    }
    for (i=0;i<3;i++)
    {
        cout<<"          Student Profile        \n";
        cout<<"..................................\n";
        cout<<"Name             : "<<s[i].name<<endl;
        cout<<"Id               : "<<s[i].id<<endl;
        cout<<"Batch            : "<<s[i].batch<<endl;
        cout<<"Section          : "<<s[i].sec<<endl;
        cout<<"Semester         : "<<s[i].sem<<endl;
        cout<<"Department       : "<<s[i].dep<<endl;
        cout<<"\n";
    }

    return 0;
}
