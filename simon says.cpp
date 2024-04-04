#include <iostream>
using namespace std ; 
int main () {

    int len1 ;
    cout << "Enter your the length : "; 
    cin >> len1 ;

    cout << "Enter them : " << endl ; 
    int arr1[len1] ;
    for (int i = 0 ; i < len1 ; i++){
        cin >> arr1[i] ; 
    }

    int len2 ;
    cout << "Enter your the length : "; 
    cin >> len2 ;

    cout << "Enter them : " << endl ; 
    int arr2[len2] ;
    for (int i = 0 ; i < len2 ; i++){
        cin >> arr2[i] ; 
    }

    int size = sizeof(arr1) / sizeof(int) ; 
	
	for(int i = 0 ; i < size ; i++){
		if(arr2[1] == arr1[i-1] ){
			cout << "true" << endl ;
            break ; 
		}
        else {
            cout << "false" << endl ; 
            break ; 
        }
	}
}