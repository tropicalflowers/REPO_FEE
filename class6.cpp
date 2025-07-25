#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the matrix: ";
    cin >> n;

    
    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    cout << "Diagonal elements are: \n";
    for (int i = 0; i < n; i++) {
        cout << matrix[i][i] << " ";
    }
    cout << endl;

    return 0;
}
