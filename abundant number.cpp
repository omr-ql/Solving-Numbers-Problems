#include <iostream>
using namespace std ; 
int main ()
{
    int number ; 
    cout << "Enter your number = " ; 
    cin >> number ; 
    int sum = 0 ; 
    int new_number = number ; 
    
    for (int i = 2 ; i < number ; i++){
        if (number % i == 0) {
           cout << i << endl ; 
           sum = sum + i ; 
        }
    
    }

    
    if (sum > new_number){
           cout << "Abundant" << endl ; 
    }
    else {
           cout << "not abundant" << endl ; 
    }
}