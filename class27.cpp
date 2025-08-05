#include <iostream>
using namespace std;
int findlargest(int* ptr1, int* ptr2, int* ptr3) {
    if (*ptr1 >= *ptr2 && *ptr1 >= *ptr3) {
        return *ptr1;
    } else if (*ptr2 >= *ptr1 && *ptr2 >= *ptr3) {
        return *ptr2;
    } else {
        return *ptr3;
    }
}
int main(){
    int a,b,c;
    int* ptra;
    int* ptrb;
    int* ptrc;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    ptra = &a;  
    ptrb = &b;
    ptrc = &c;
    a= *ptrb;
    b= *ptrc;
    c= *ptra;
    cout << "Value of a is: " << a << endl;
    cout << "Value of b is: " << b << endl;
    cout << "Value of c is: " << c << endl;

    findlargest(ptra, ptrb, ptrc);
    cout << "Largest value is: " << findlargest(ptra, ptrb, ptrc) << endl;
    


}