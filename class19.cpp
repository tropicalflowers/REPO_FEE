#include <iostream>
using namespace std;
int main(){
    int a=9;
    int* ptr=&a;
    int** ptr2=&ptr;
    cout<<"value of a is: "<<a<< endl;
    cout<<"adress of a is: "<<ptr<<endl;
    cout<<"value on ptr2 is: "<< ptr2;
    return 0;
}
