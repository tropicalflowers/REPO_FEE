#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    //question 1
    cout<< "QUESTION 1" << endl;
    int a = 9;
    int* ptr = &a;
    int** ptr2 = &ptr;
    cout << "Value of a is: " << a << endl;
    cout << "Address of a is: " << ptr << endl;
    cout << "Value on ptr2 is: " << *ptr2 << endl; 



    //question 2
    cout << "\nQUESTION 2" << endl;
    float f = 3.14;
    float* fPtr = &f;
    cout << "Value of f is: " << f << endl;
    cout << "Address of f is: " << fPtr << endl;


    //question 3
    cout << "\nQUESTION 3" << endl;
    int x = 10, y = 20;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;


    //question 4
    cout << "\nQUESTION 4" << endl;
    int arr[5] = {1, 2, 3, 4, 5};
    int* arrPtr = arr;
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << *(arrPtr + i) << " ";
    }

    return 0;
}