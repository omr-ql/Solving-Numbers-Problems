# include <iostream>
using namespace std ; 
int main () 
{
    int num ; 
    cout << "Enter your number = " << endl ; 
    cin >> num;
    int rev = 0;
    int ur_name = num ;
    while (num != 0)
    {
        rev = rev * 10 ;
        rev = rev + (num % 10) ;
        num = num / 10 ; 
    }
    cout << "The reversed of "<< ur_name <<" is = "<< rev << endl ; 

}