#include <iostream>
using namespace std;
int value = 10;
void showScopes() {
    
    int value = 20;
    cout << "Inside function, value = " << value << endl;

    {
        
        int value = 30;
        cout << "Inside block, value = " << value << endl;
    }

    cout << "After block, inside function, value = " << value << endl;
}

int main() {
    cout << "Global scope, value = " << value << endl;
    showScopes();
    cout << "Back to global scope, value = " << value << endl;
    return 0;
}