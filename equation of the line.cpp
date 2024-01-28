#include <iostream>
using namespace std ; 
int main () {

    double slope ; 
    double b ;     

    double x1 ; 
    cout << "Enter your point x1 = " << "" ; 
    cin >> x1 ; 

    double x2 ; 
    cout << "Enter your point x2 = " << "" ;
    cin >> x2 ; 

    double y1 ; 
    cout << "Enter your point y1 = " << "" ; 
    cin >> y1 ;

    double y2 ; 
    cout << "Enter your point y2 = " << "" ; 
    cin >> y2 ; 

    cout << "---------------------------------------" << endl ; 

    slope = (y2 - y1) / (x2 - x1)  ;
    cout << "# The slope is equal = "<< slope << endl ; 

    b = (slope * (x1)) - y1 ; 
    cout << "# The b value is equal to = " << b << endl ;  

    cout << "# The formula of equation of the line : " << "y = " <<slope <<"x + "<< b << endl;  
}