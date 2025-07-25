#include <iostream>
using namespace std;
void addone(int* p){
    (*p)++;
}
int main(){
    int value=5;
    addone(&value);
    cout<<"Value after adding one: "<<value<<endl;
    return 0;
}