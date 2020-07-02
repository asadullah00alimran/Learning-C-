//Character array or string,taking input from user and print
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char name[20];

    cout<<"Enter your name : ";
    gets(name);

    cout<<name<<endl;

    return 0;

}
