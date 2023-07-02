#include "question1.h"
#include<iostream>
using std::cout;
bool test_config()
{
    return true;
}

double get_fahrenheit(double c){
    double f = c;
    //cout<<f<<"\n";
    double cons = 9.0/5.0;
    //cout<<cons<<"\n";
    f = f * cons;
    //cout<<f<<"\n";
    f += 32;
    //cout<<f<<"\n";
    return f;
}