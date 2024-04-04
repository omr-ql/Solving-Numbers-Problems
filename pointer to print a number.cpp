#include <iostream>
using namespace std;
void print(int *num);
int main()
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    print(&num);
}
void print(int *num)
{
    cout << *num << endl;
}