#include<iostream>
#include"question4.h"
using std::cout; using std::cin;
int main()
{
    char con1;
    char con2;
    int sold;
    int earned;
    do{
        do
        {
            cout<<"Please enter the ammount of books sold: ";
            cin>>sold;
            cout<<"Please confirm that "<<sold<<" Books sold. (Enter \'y\' if this is correct): ";
            cin>>con1;
        } while (con1 != 'y' && con1 != 'Y' );
        earned = get_earned_points(sold);
        cout<<"Points Earned "<<earned<<"\n";
        cout<<"Would you like to repeat the program (Enter \'n\' to close or \'y\' to continue): ";
        cin>>con2;
    } while(con2!='n'&&con2!='N');
    
    return 0;
}