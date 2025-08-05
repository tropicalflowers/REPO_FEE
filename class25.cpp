#include <iostream>
using namespace std;
int main(){
    int a;
    int* ptr;
    int* ptr2;
    cout << "Enter an integer: ";
    cin >> a;
    ptr = &a;
    ptr2 = &a;
    cout << "Value of a is: " << a << endl;
    cout << "Address of a is: " << ptr << endl;
    cout << "Value on ptr2 is: " << *ptr2 << endl;
    cout << "Address of ptr is: " << &ptr << endl;
    cout << "Value pointed by ptr2 is: " << **ptr2 << endl;
    cout << "Address of ptr2 is: " << &ptr2 << endl;    
    return 0;
}