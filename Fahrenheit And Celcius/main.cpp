#include <iostream>

using namespace std;

int main()
{
    int c;
    cout<<" 1. Fahrenheit To Celcius \n";
    cout<<" 2. Celcius To Fahrenheit \n";
    cout<<" Enter Choice : ";
    cin>>c;

    if (c==1)
    {
        float far;
        cout<<"Enter Temparature In Fahrenheit : ";
        cin>>far;
        cout<<"In Celcius : "<<(far-32)*5/9;
    }
    else if (c==2)
    {
        float cel;
        cout<<"Enter Temparature In Celcius : ";
        cin>>cel;
        cout<<" In Fahrenheit : "<<cel*(9/5)+32;
    }
    else
        cout<<" Invalid Input ";

    return 0;
}
