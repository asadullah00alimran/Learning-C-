#include<iostream>
using namespace std;

int main()
{
    int year;

    cout<<"Enter the year where you want to check : ";
    cin>>year;

    if(year%4==0 && year%100 != 0)
    {
        cout<<"\nThis year is Leap-Year"<<endl;
    }
    else
    {
        cout<<"\nThis year is not leap year"<<endl;
    }

    return 0;
}
