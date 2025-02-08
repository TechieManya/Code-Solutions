#include<iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the size of matrix: ";
    cin >> x;
    
    int mat[50][50];
    cout << "Enter the elements of matrix: ";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cin >> mat[i][j];
        }
    }
    int first = 0, last = x - 1, left = 0, right = x - 1;
    while (first <= last && left <= right) {
        for (int i = left; i <= right; i++) {
            cout << mat[first][i] << " ";
        }
        first++;
        for (int i = first; i <= last; i++) {
            cout << mat[i][right] << " ";
        }
        right--;
        if (first <= last) {
            for (int i = right; i >= left; i--) {
                cout << mat[last][i] << " ";
            }
            last--;
        }
        if (left <= right) {
            for (int i = last; i >= first; i--) {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }

    return 0;
}
