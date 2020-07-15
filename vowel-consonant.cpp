#include<iostream>
using namespace std;

int main()
{
    char ch;

    cout<<"Enter a Character : ";
    cin>>ch;

    ch = tolower(ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout<<"\nThe letter is VOWEL"<<endl;
    }

    else
    {
        cout<<"\nThe letter is CONSONANT"<<endl;
    }

    return 0;
}

