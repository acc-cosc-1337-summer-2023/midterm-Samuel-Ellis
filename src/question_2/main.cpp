#include "question2.h"
#include<iostream>

using std::cout; using std::cin;

int main()
{
    int user_val1;
    int user_val2;
    cout<<"Enter a int value to test the referance parameter: ";
    cin>>user_val1;
    cout<<"This is the value before the void function displaying referance variables is run: "<<user_val1<<"\n";
    referance_val_change_to_10(user_val1);
    cout<<"This is the value after the void function displaying referance variables is run: "<<user_val1<<"\n";
    cout<<"Enter a int value to test the value parameter: ";
    cin>>user_val2;
    cout<<"This is the value before the void function displaying value variables is run: "<<user_val2<<"\n";
    value_val_change_to_10(user_val2);
    cout<<"This is the value after the void function displaying value variables is run: "<<user_val2<<"\n";
    return 0;
}