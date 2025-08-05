#include <iostream>
using namespace std;


void doubleByValue(int num) {
    num = num * 2;
    cout << "Inside doubleByValue (num doubled): " << num << endl;
}

void doubleByReference(int &num) {
    num = num * 2;
    cout << "Inside doubleByReference (num doubled): " << num << endl;
}

int main() {
    int a = 5;
    int b = 5;

    cout << "Original value of a: " << a << endl;
    doubleByValue(a);  
    cout << "After doubleByValue, a is still: " << a << endl;

    cout << "\nOriginal value of b: " << b << endl;
    doubleByReference(b);  
    cout << "After doubleByReference, b is now: " << b << endl;

    return 0;
}
