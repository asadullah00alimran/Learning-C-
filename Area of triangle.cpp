#include<iostream>
using namespace std;

int main()
{
    float area,base,height;

    cout<<"Enter Height : ";
    cin>>height;

    cout<<"Enter Base : ";
    cin>>base;

    area = (float)1/2 * base* height;

    cout<<"Area is : "<<area;
    cout<<endl;

    return 0;
}
