#include"question3.h"
#include<iostream>
using std::cout;
int main()
{
    double result = get_dna_p_distance("GAGCCTACTAACGGGAT","CATCGTAATGACGGCCT");
    cout<<"The p-distance between \"GAGCCTACTAACGGGAT\" and \"CATCGTAATGACGGCCT\" is: "<<result<<"\n";
    return 0;
}