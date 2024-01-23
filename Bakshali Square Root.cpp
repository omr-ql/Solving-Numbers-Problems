#include <iostream>
using namespace std ; 
int main () 
{
    float num = 1001; 
    float perfect_number = 0.0 ; 
    float x = 0.0 ; 

    for (int i = static_cast<int>(num) ; i > 0 ; i++) {
        for (int j = 1 ; j < i ; j++) {
            if (j * j == i ) {
                perfect_number = i ; 
                x = j ; 
                break ; 
            }
        } 
        if (perfect_number > 0 ) {
            break ; 
        }
    }
    
   float d = num - (x * x) ; 
   float P = d / ((2.0) * x) ; 
   float A = x + P ;
   float result = A - (P*P) / (2 * A) ; 
   cout << "The result of √"<< num <<" is = "<<result << endl ; 
}