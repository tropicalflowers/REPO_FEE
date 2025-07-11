#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    // Input the size of the matrix (square matrix)
    cout << "Enter the size of the matrix: ";
    cin >> n;

    // Declare a vector of vectors (2D vector)
    vector<vector<int>> matrix(n, vector<int>(n));

    // Input the matrix elements
    cout << "Enter the elements of the matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Output the diagonal elements
    cout << "Diagonal elements are: \n";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";  // Main diagonal element
    }
    cout << endl;

    return 0;
}
