#include "matrix.h"
#include <iostream> // Include necessary header files

using namespace std; // Use the standard namespace

// Constructor
matrix::matrix(int rows, int columns) {
    r = rows;
    c = columns;
    a = new int* [r]; // Allocate memory for rows
    for (int x = 0; x < r; x++) {
        a[x] = new int[c]; // Allocate memory for columns
    }
}

// Destructor
matrix::~matrix() {
    for (int x = 0; x < r; x++) {
        delete[] a[x]; // Delete each row
    }
    delete[] a; // Delete the array of pointers
}

// Function to input matrix values
void matrix::makeMatrix() {
    cout << "Insert the values for the matrix..." << endl;
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            cout << "What is Row " << x + 1 << ", " << "Column " << y + 1 << ": ";
            cin >> a[x][y];
        }
    }
}

// Operator overloading for matrix addition
matrix matrix::operator+(const matrix& matrix2) {
    matrix temp(r, c);
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            temp.a[x][y] = a[x][y] + matrix2.a[x][y];
        }
    }
    return temp;
}

// Operator overloading for matrix subtraction
matrix matrix::operator-(const matrix& matrix2) {
    matrix temp(r, c);
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            temp.a[x][y] = a[x][y] - matrix2.a[x][y];
        }
    }
    return temp;
}

// Operator overloading for matrix multiplication
matrix matrix::operator*(const matrix& matrix2) {
    matrix temp(r, matrix2.c);
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < matrix2.c; y++) {
            temp.a[x][y] = 0;
            for (int z = 0; z < c; z++) {
                temp.a[x][y] += a[x][z] * matrix2.a[z][y];
            }
        }
    }
    return temp;
}

// Operator overloading for matrix output
ostream& operator <<(ostream& printMatrix, const matrix& matrix2) {
    for (int x = 0; x < matrix2.r; x++) {
        for (int y = 0; y < matrix2.c; y++) {
            printMatrix << matrix2.a[x][y] << " ";
        }
        printMatrix << endl;
    }
    return printMatrix;
}

// Function to display the matrix
void matrix::showMatrix() {
    for (int x = 0; x < r; x++) {
        for (int y = 0; y < c; y++) {
            cout << a[x][y] << " ";
        }
        cout << endl;
    }
}
