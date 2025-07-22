#include<iostream>
using namespace std;
#define macros 7.8 
#undef macros 
#define macros 9.0 
#undef macros
#define macros 105.0
int main(){
    const float pi= 3.14;
   
    cout << "Value of pi (const): " << pi << endl;
    cout << "Value of macros (#define): " << macros << endl;


return 0;}