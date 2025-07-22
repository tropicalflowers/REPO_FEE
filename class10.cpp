#include <iostream>
using namespace std;

void factorial(int n) {
    if (n <= 1) {
        cout << "Factorial of " << n << " is 1" << endl;
    } else {
        int result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        cout << "Factorial of " << n << " is " << result << endl;
    }
}
int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        factorial(number);
    }

    return 0;
}