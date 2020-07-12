#include<iostream>
#include<iomanip>
//for setprecision command
using namespace std;

int main()
{
    float num1,num2;

    cout<< "Enter Two numbers : ";

    cin>>num1;
    cin>>num2;

    cout<<showpoint;//For showing the number after decimal point.
    cout<<fixed;//it is work after decimal point.
    //when used fixed command before setprecision command then setprecision command
    //works after decimal point.
    cout<<setprecision(5);//for showing 10 numbers before and after decimal point.

    float sum = num1 + num2;
    cout<<endl<<setw(20)<<"Summation is : "<<sum;
    //setw() works for alignment of "summation is" this string.
    cout<< endl;

    float sub = num1 - num2;
    cout<<setw(20)<<"Subtraction is : "<<sub;
    cout<< endl;

    cout<<noshowpoint;//For not showing the number after decimal point.
    float mul = num1 * num2;
    cout<<setw(20)<<"Multiplication is : "<<mul;
    cout<< endl;


    float div = num1 / num2;
    cout<<setw(20)<<"Division is : "<<div;
    cout<< endl;

    //int rem = num1 % num2;
    //cout<<"Remainder is : "<<rem;
    //cout<< endl;


    return 0;
}

