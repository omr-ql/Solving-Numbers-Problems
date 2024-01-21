#include <iostream>
using namespace std ; 
int main ()
{
    int number , digit ; 
    cout << "Enter your number = " << endl ; 
    cin >> number ; 
    int sum = 0 ; 
    int new_num = number ; 
    
    if (number < 1000 ) {
        while (number > 0 )            
        {
            digit = number % 10 ; 
            number = number / 10 ; 
            sum = sum + (digit * digit * digit  ) ; 
        }
    } 

    else {
        while (number > 0 )            
        {
            digit = number % 10 ; 
            number = number / 10 ; 
            sum = sum + (digit * digit * digit * digit ) ; 
        }
    }

    if (sum == new_num) 
    {
        cout << new_num <<" is amstrong" ; 
    }
    
    else 
    {
        cout << new_num <<" is not amstrong" ; 
    }

}  