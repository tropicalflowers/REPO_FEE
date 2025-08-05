#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array is: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

        
    int* ptr = arr; 

    for (int i = 0; i < 5; i++) {
        sum += *(ptr + i); 
    }

    cout << "\nSum " << sum << endl;

    return 0;
}
