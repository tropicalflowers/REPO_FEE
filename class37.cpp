#include <iostream>
using namespace std;
namespace myMath {
    int add(int a, int b) {
        return a + b;
    }
}
using namespace myMath;
int main() {
    int x = 5, y = 10;
    cout << "Sum of " << x << " and " << y << " is: " << myMath::add(x, y) << endl;


    cout << "Sum of " << x << " and " << y << " is: " << add(x, y) << endl; // Using the using directive
    return 0;
}