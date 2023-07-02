#include "question1.h"
#include<iostream>
using std::cout; using std::cin;
int main()
{
    auto check = 'y';
    auto val = 0.0;
    do{
        cout<<"Enter a value you want to convert from c to f: ";
        cin>>val;
        cout<<"The c equivalant is "<<get_fahrenheit(val)<<"\n"; 
        cout<<"Do you want to continue(Enter y to continue or n to close): \n";
        cin>>check;
    } while(check == 'y' || check == 'Y');
    return 0;
}