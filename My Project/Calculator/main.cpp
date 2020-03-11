#include <iostream>

using namespace std;

int main()
{
    cout<<"         Calculator          "<<endl;
    cout<<"............................."<<endl<<endl;

    double a;
    double b;
    double result;
    char c;

    cout<<"Enter Two Number Respectively : "<<endl;
    cin>>a>>b;
    cout<<"\n Press + For Addition "<<endl;
    cout<<" Press - For Subtraction "<<endl;
    cout<<" Press * For Multiplication"<<endl;
    cout<<" Press / For Division"<<endl;
    cout<<"\n Enter Your Choice : ";
    cin>>c;

    switch(c)
        {
            case ('+'):
            {
                result=a+b;
                cout<<"The Addition Is : "<<result;
                break;
            }
            case ('-'):
            {
                result=a-b;
                cout<<"The Subtraction Is : "<<result;
                break;
            }
            case ('*'):
            {
                result=a*b;
                cout<<"The Multiplication Is : "<<result;
                break;
            }
            case ('/'):
            {
                result=a/b;
                cout<<"The Division Is : "<<result;
                break;
            }
            default:
                {
                    cout<<"invalid input";
                }
        }
    return 0;
}
