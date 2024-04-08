#include <iostream>
using namespace std;
int main()
{
    char married ;
    char gender ;
    int age ;

    cout << "Are You Married ?\"If You Married Type \'y\' If You Single Like Me :( Type \'n\' \" \n " ; 
    cin >> married ;

    cout << "Are You Male Or Female ? \'Just Type \'m\' For Male Or \'f\' For Female\"? \n";
    cin >> gender ;

    cout << "How Old Are You ? \n" ;
    cin >> age ;
    
    if ((married == 'y' ) || (married == 'n' && gender == 'm' && age > 30) || (married == 'n' && gender == 'f' && age > 25))

    cout <<"YOU WILL GET INSURE :)" ;
    else 
    cout << "Sorry , There is not insure for you";
    return 0 ;
}