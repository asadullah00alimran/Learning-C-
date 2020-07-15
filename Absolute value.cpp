#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any digit : ";
    cin>>num;

    if(num<0)
    {
        cout<<"Absolute value of this number is :"<<-num<<endl;
    }
    else
    {
        cout<<"Absolute value of this number is :"<<num<<endl;
    }
    return 0;
}
