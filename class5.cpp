#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Example arrays
    vector<int> array1 = {1, 2, 3, 4};
    vector<int> array2 = {5, 6, 7, 8};
    vector<int> sum_array(array1.size());  // Array to store the sum

    // Ensure arrays have the same size
    if (array1.size() == array2.size()) {
        for (size_t i = 0; i < array1.size(); ++i) {
            sum_array[i] = array1[i] + array2[i];
        }

        // Output the result
        cout << "Sum of the arrays: ";
        for (size_t i = 0; i < sum_array.size(); ++i) {
            cout << sum_array[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Arrays have different sizes!" << endl;
    }

    return 0;
}
