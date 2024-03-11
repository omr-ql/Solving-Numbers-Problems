#include <iostream>
using namespace std ; 
void swap (int &num1 , int &num2 ) ; 
int main () {

int num1 = 10 ; 
int num2 = 60 ; 
swap(num1,num2) ; 

cout << "Number 1 becomes = " << num1 << endl ; 
cout << "Number 2 becomes = " << num2 << endl ; 
}

void swap (int &num1 , int &num2 ){
    int temp ;
    temp = num1 ; 
    num1 = num2 ;
    num2 = temp ; 
}