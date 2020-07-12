#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<< "Enter Two numbers : ";

    cin>>num1;
    cin>>num2;

    int sum = num1 + num2;
    cout<<"Summation is : "<<sum;
    cout<< endl;

    int sub = num1 - num2;
    cout<<"Subtraction is : "<<sub;
    cout<< endl;

    int mul = num1 * num2;
    cout<<"Multiplication is : "<<mul;
    cout<< endl;

    float div = (float)num1 / num2;
    cout<<"Division is : "<<div;
    cout<< endl;

    int rem = num1 % num2;
    cout<<"Remainder is : "<<rem;
    cout<< endl;


    return 0;
}
