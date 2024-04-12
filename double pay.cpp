#include <iostream>
using namespace std ; 
int main () {

    int num ; 
    cout << "Enter your number = " << endl ; 
    cin >> num ; 

    int result = 0 ; 
    int pay = 1 ; 

    for (int i = 0 ; i < num ; i++) {
        if (num > 0) {
            result = result + pay ; 
                pay = pay * 2 ; 
            }
        else {
            cout << "only get tests for valid positive integers." ; 
        }
        
    }
    cout << result << " pennies has selled." << endl; 

}