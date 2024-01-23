#include <iostream>
#include <cmath>
using namespace std; 
int main () {
    int number , digit = 0 ,factorial = 1 , sum = 0 ; 
    cout << "Enter your number " << endl ; 
    cin >> number ; 
    int new_number = number ; 

    while (number > 0 ){
        digit = number % 10 ; 
        number = number / 10 ; 
        for (int i = 1 ; i <= digit ; i++ ) {
            factorial = factorial * i ; 
            
        }
        sum = sum + factorial ; 
        factorial = 1 ; 
    }   
    if ( sum == new_number ) {
        cout << "Curious" ; 
    }
    else {
        cout << "Not curious" ; 
    }

}