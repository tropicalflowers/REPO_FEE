#include<iostream>
using namespace std;
void printnumbers(int n) {
    if (n < 1) {
        cout << "No numbers to print." << endl;
        return;
    }
    for (int i = 1; i <= n; ++i) {
        cout << i << " ";
    }
    cout << endl;
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
        printnumbers(number);
    }

    return 0;
}