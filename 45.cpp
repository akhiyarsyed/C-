#include <iostream>  
using namespace std;  
const int ROWS = 2;  
const int COLS = 3;  
void addMatrices(int mat1[][COLS], int mat2[][COLS], int result[][COLS]) {  
    for(int i = 0; i < ROWS; i++) {  
        for(int j = 0; j < COLS; j++) {  
            result[i][j] = mat1[i][j] + mat2[i][j];  
        }  
    }  
}  
int main() {  
    int matrix1[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}};  
    int matrix2[ROWS][COLS] = {{7, 8, 9}, {10, 11, 12}};  
    int result[ROWS][COLS];  
    addMatrices(matrix1, matrix2, result);  
    cout << "Matrix 1: " << endl;  
    for(int i = 0; i < ROWS; i++) {  
        for(int j = 0; j < COLS; j++) {  
            cout << matrix1[i][j] << " ";  
        }  
        cout << endl;  
    }  
    cout << "Matrix 2: " << endl;  
    for(int i = 0; i < ROWS; i++) {  
        for(int j = 0; j < COLS; j++) {  
            cout << matrix2[i][j] << " ";  
        }  
        cout << endl;  
    }  
    cout << "Result: " << endl;  
    for(int i = 0; i < ROWS; i++) {  
        for(int j = 0; j < COLS; j++) {  
            cout << result[i][j] << " ";  
        }  
        cout << endl;  
    }  
    return 0;  
}  