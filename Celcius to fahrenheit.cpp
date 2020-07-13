#include<iostream>
using namespace std;

int main()
{
    float cel,fah;

    cout<<"Enter Temperature in Celcius : ";
    cin>>cel;

    fah = ((9*cel)+160)/5;

    cout<<"Temperature in Fahrenheit is :"<<fah;
    cout<<endl;

    return 0;
}
