#include "question3.h"
#include<iostream>
#include<cmath>
using std::cout;
bool test_config()
{
    return true;
}

double get_dna_p_distance(const std::string param1, const std::string param2){
    double counter = 0;
    float rounding;
    for (int i = 0; i < int(param1.length()); i++){
        if(param1[i] != param2[i]){
            counter++;
        }
    }
    counter = counter/17.0;
    counter = std::round(counter/0.0001)*0.0001;
    return counter;
}