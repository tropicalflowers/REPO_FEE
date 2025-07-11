#include <iostream>
using namespace std;

int main() {
    int i, j;
    int arr[2][3];

    cout << "Enter 6 elements for a 2x3 array:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The 2x3 array is:" << endl;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int sum = 0;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
