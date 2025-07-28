#include <iostream>
using namespace std;

int main() {
    int num[3] = {1, 2, 3};
    int *p = num; 
    for (int i = 0; i < 3; i++) {
        cout << *(p + i) << " ";
    }
    return 0;
}