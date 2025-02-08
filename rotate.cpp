#include <iostream>
#include <vector>
using namespace std;

void printMatrix(const vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to rotate 
void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Rotate the matrix layer by layer
    for (int i = 0; i < n / 2; i++) {
        int last = n - 1 - i; 
        for (int j = i; j < last; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[last - (j - i)][i]; // Top to left
            matrix[last - (j - i)][i] = matrix[last][last - (j - i)]; // Left to bottom
            matrix[last][last - (j - i)] = matrix[j][last]; // Bottom to right
            matrix[j][last] = temp; // Right to top
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "\nOriginal Matrix:" << endl;
    printMatrix(matrix);

    rotateMatrix(matrix);

    cout << "\nRotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}
