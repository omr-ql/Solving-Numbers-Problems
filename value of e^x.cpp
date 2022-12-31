#include <iostream>
#include <cmath>
using namespace std ;
double fact(int x) ;
int main ()
{
    long long x1 ;
    cout << "Enter intaial value = " << endl; 
    cin >> x1 ; 

    long long x2 ; 
    cout << "Enter end value = " << endl; 
    cin >> x2 ; 
 
    for (double i = x1 ; i <= x2 ; i++) {
       cout << static_cast<double>(exp(i)) << endl ; 
    }

}