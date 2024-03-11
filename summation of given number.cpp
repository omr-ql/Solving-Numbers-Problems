#include <iostream>
using namespace std ; 
int main ()
{
    int num ; 
    cout << "Enter your number = " << endl ; 
    cin >> num ; 
    int counter = 0 ; 
    
    for ( int i = 1 ; i <= num ; i++) {
        counter = counter + i ;
    }
        cout << "The summation of " << num << " is "<< counter << endl ; 
        
}