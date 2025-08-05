#include <iostream>
#include <string>
using namespace std;
struct book {
    int id;
    double price;
};
int main() {
    book b1;
    b1.id = 101;
    b1.price = 29.99;

    cout << "Book ID: " << b1.id << "\n";
    cout << "Book Price: $" << b1.price << "\n";

  

    return 0;
}
