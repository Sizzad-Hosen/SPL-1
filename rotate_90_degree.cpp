#include <iostream>
using namespace std;


void rotateMatrix(int matrix[][10], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
       
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {

            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }
}

void printMatrix(int matrix[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}



int main() {
    int n;
    int matrix[10][10]; 
    cout << "Enter the size of the matrix (N): ";
    cin >> n;
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    rotateMatrix(matrix, n);

    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix, n);

    return 0;
}

