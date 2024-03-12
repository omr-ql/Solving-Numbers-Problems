#include <iostream>
using namespace std ; 
int main () 
{
    int num1 , num2 ; 
    cout << "Enter your first number = " << endl ; 
    cin >> num1 ; 
    cout << "Enter your second number = " << endl ; 
    cin >> num2 ; 
    int higher ; 
    
    if (num1 > num2) {
        higher = num1 ; 
    }
    else {
        higher = num2 ; 
    }
    
    
    while (true) {
    if ((higher % num1 == 0) && (higher % num2 == 0 )) {
        cout << "The Least common factor of "<< num1 <<" and "<< num2 <<" = "<< higher ;
        break ; 
    }
        
    else {
        higher = higher + 1 ;  
    }
    
}
}